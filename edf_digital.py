import pyedflib
import numpy as np
import matplotlib.pyplot as plt
import os
from sklearn.model_selection import train_test_split

#Samples are represented in 16-bit 2's complement

# Get the directory where the script is located
script_dir = os.path.dirname(__file__)

# Construct the full path to the file
file_path = os.path.join(script_dir, 'EDF', 'short.EDF')
signalList = []
f = pyedflib.EdfReader(file_path)
n = f.signals_in_file
n=n-14
signal_labels = f.getSignalLabels()
sample_f = f.getSampleFrequencies()
number_of_samples = f.getNSamples()[0]
Nblocks = int(number_of_samples/64)
sigbufs = np.zeros(number_of_samples)
full_data64 = np.ndarray(shape=(Nblocks*n, 64, 1))
X = np.zeros(n*number_of_samples)
for i in np.arange(n):
        sigbufs[:] = f.readSignal(i, digital=True)
        #sigbufs_new = (sigbufs + 32678)/(2**16-1) #normalised
        sigbufs_new = (sigbufs + 32678) #converts 16-bit 2's complement to 16-bit unsigned integer
        signalList.append(sigbufs_new) 
        X[i*number_of_samples:(i+1)*number_of_samples] = sigbufs[:]
        for j in np.arange(Nblocks):
                full_data64[i*Nblocks+j] = signalList[i][j*64:(j+1)*64].reshape(64, 1)
train_data, test_data = train_test_split(full_data64, test_size=0.1, random_state=42)

print(train_data.shape, test_data.shape)
for j in range(3):
        plt.figure(j+1)
        # Loop through each subplot and plot some data
        fig, axs = plt.subplots(7, 1, figsize=(10, 20), sharex=True)
        for i in range(7):
                axs[i].plot(signalList[(j)*7+i])
                axs[i].set_title(f'CH {signal_labels[(j)*7+i]}')

# Adjust layout
plt.tight_layout()

# Show the plot
plt.show()
print(sample_f)
f.close()