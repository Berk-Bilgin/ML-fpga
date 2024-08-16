import pyedflib
import numpy as np
import matplotlib.pyplot as plt
import os
import tensorflow as tf

#Samples are represented in 16-bit 2's complement
signalList = []
# Get the directory where the script is located
script_dir = os.path.dirname(__file__)
# Construct the full path to the file
file_path = os.path.join(script_dir, 'EDF', 'PD patient Frontal', 'DP141.edf')
f = pyedflib.EdfReader(file_path)
number_of_samples = f.getNSamples()[0]
data_samples=(426-380)*250
freq = f.getSampleFrequencies()
Nblocks = int((data_samples)/64)
signal_labels = f.getSignalLabels()
n = f.signals_in_file
n=n-9
X=np.ndarray(shape=(n, data_samples))
sigbufs = np.zeros(number_of_samples)
full_data64 = np.ndarray(shape=(n, Nblocks, 64, 1))
multiplier = f.getPhysicalMaximum(0)/f.getDigitalMaximum(0)
for i in range(n):
        sigbufs[:] = f.readSignal(i, digital=True)
        sigbufs_new = sigbufs[380*250:426*250]
        X[i] = sigbufs_new*multiplier
        signalList.append(sigbufs_new) 
        for j in range(Nblocks):
                full_data64[i][j] = signalList[i][j*64:(j+1)*64].reshape(64, 1)
print(full_data64.shape)
# for j in range(3):
#         # Loop through each subplot and plot some data
#         fig, axs = plt.subplots(7, 1, figsize=(10, 20), sharex=True)
#         for i in range(7):
#                 axs[i].plot(X[j*7+i])
#                 axs[i].set_title(f'CH {signal_labels[(j)*7+i]}')
# # Adjust layout
# plt.tight_layout()
# # Show the plot
# plt.show()

def prd_loss_dig2phy(y_true, y_pred):
    y_true = (y_true)*multiplier
    y_pred = (y_pred)*multiplier
    rms_deviation = (tf.reduce_sum(tf.square(y_true - y_pred)))
    percentage_rmsd = tf.sqrt(rms_deviation/(tf.reduce_sum(tf.square(y_true))+tf.keras.backend.epsilon()))* 100
    return percentage_rmsd
from tensorflow import keras
# best_autoencoder = keras.models.load_model('best_model.h5', custom_objects={'prd_loss_dig2phy': prd_loss_dig2phy})
# best_encoder= best_autoencoder.layers[1]
# best_encoder.summary()
# best_encoder.save('extracted_encoder_model.h5')
import tensorflow as tf

def weighted_mae_loss(y_true, y_pred):
    # y_true, y_pred shape: (batch_size, signal_length, features)
    weight = 10
    # Extract the labels (0 or 1) from the last feature dimension of y_true
    labels = y_true[:, :, 1]  # Assuming the label is the last feature
    #labels = tf.expand_dims(labels, axis=-1)  # Expand dims to make labels shape (batch_size, signal_length, 1)
    
    # Remove the labels from y_true for loss calculation
    y_true_processed = y_true[:, :, 0]  # Assuming the first feature is the target value
    y_true_processed = y_true_processed[..., tf.newaxis]  # Expand dims to make shape (batch_size, signal_length, 1)
    # Compute the absolute error
    prd_error = prd_loss_dig2phy(y_true_processed, y_pred)

    # Apply the weight based on the labels
    weighted_abs_error = prd_error * (labels * (weight - 1) + 1)

    # Compute the mean of the weighted absolute error
    weighted_loss = tf.reduce_mean(weighted_abs_error)
    return weighted_loss

import tensorflow.keras.backend as K

def weighted_mse_loss(y_true, y_pred):
    # y_true, y_pred shape: (batch_size, num_channels, signal_length)
    # label shape: (batch_size, )
    weight = 200
    # Extract the labels (0 or 1) from the last dimension of y_true
    labels = y_true[:, :, 1]
    # Remove the labels from y_true for loss calculation
    y_true_processed = y_true[:, :, 0]
    y_true_processed=y_true_processed[..., tf.newaxis]
    loss = K.mean(K.square(y_pred - y_true_processed))
    weighted_loss = loss * ((labels * (weight - 1)) + 1)
    return K.mean(weighted_loss)

def prd_loss_dig2phy_new(y_true, y_pred):
    y_true_processed = y_true[:, :, 0]
    y_true_processed = y_true_processed[..., tf.newaxis]
    y_true_processed = (y_true_processed)*multiplier
    y_pred = (y_pred)*multiplier
    rms_deviation = (tf.reduce_sum(tf.square(y_true_processed - y_pred)))
    percentage_rmsd = tf.sqrt(rms_deviation/(tf.reduce_sum(tf.square(y_true_processed))+tf.keras.backend.epsilon()))* 100
    return percentage_rmsd
from qkeras.utils import load_qmodel
from qkeras import quantizers
from qkeras import QConv1D, QDense, QActivation
best_autoencoder = load_qmodel('real_quantised.h5', custom_objects={'prd_loss_dig2phy_new': prd_loss_dig2phy_new, 'weighted_mse_loss': weighted_mse_loss})
seizureLosses = np.ndarray(shape= (21, 1))
normalLosses = np.ndarray(shape= (21, 1))
pred = np.ndarray(shape=(n, Nblocks, 64, 1))
inter = np.ndarray(shape=(n, Nblocks, 16))
#Qencoder = best_autoencoder.layers[1]
#Qencoder.summary()
#Qencoder.save('really_Qencoder.h5')
weight_model = load_qmodel('inter1_quantised.h5', custom_objects={'prd_loss_dig2phy_new': prd_loss_dig2phy_new, 'weighted_mse_loss': weighted_mse_loss})
best_autoencoder.set_weights(weight_model.get_weights())
for i in range(n):
    pred[i] = best_autoencoder.predict(full_data64[i])
    #inter[i] = Qencoder.predict(full_data64[i])
    #print(prd_loss_dig2phy(full_data64[i], pred[i]).numpy())
    #best_autoencoder.evaluate(full_data64[n])
    normalLosses[i] = prd_loss_dig2phy(full_data64[i, :136], pred[i, :136]).numpy()
    seizureLosses[i] = prd_loss_dig2phy(full_data64[i, 137:], pred[i, 137:]).numpy()
print(np.mean(normalLosses))
print(np.mean(seizureLosses))
#print(np.max(inter), np.min(inter), np.mean(np.abs(inter)))
# best_autoencoder.summary()
# Qencoder = best_autoencoder.layers[1]
# Qencoder.summary()
# Qencoder.save('Qencoder.h5')
# pred_encoder = Qencoder.predict(full_data64[20])
# print(pred_encoder[1])
#print(prd_loss_dig2phy(full_data64[20][146], pred[20][146]).numpy())
# signal_last = best_autoencoder.predict(full_data64[20]).reshape(Nblocks*64, 1)
# signal9 = best_autoencoder.predict(full_data64[8]).reshape(Nblocks*64, 1)
# plt.plot(full_data64[20].reshape(Nblocks*64, 1)*multiplier, label='True', color='red')
# plt.plot(signal_last*multiplier, label='Predicted (PRD: 18.4%)', color='blue', linestyle='--')
# plt.legend()
# plt.grid(True)
# plt.show()
plt.plot(pred[20][146]*multiplier, label='Pred')
plt.plot(full_data64[20][146]*multiplier, label='True')
plt.legend()
plt.show()

# plt.plot(full_data64[8].reshape(Nblocks*64, 1)*multiplier, label='True', color='red')
# plt.plot(signal9*multiplier, label='Predicted (PRD: 50.6%)', color='blue', linestyle='--')
# plt.legend()
# plt.grid(True)
# plt.show()
f.close()