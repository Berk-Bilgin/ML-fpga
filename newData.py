import pyedflib
import numpy as np
import matplotlib.pyplot as plt
import os
from sklearn.model_selection import train_test_split

#Samples are represented in 16-bit 2's complement

# Get the directory where the script is located
script_dir = os.path.dirname(__file__)
file_counter = 0
Files = []
badFiles = []
# Construct the full path to the file
file_path = os.path.join(script_dir, 'EDF', 'PD patient Frontal')
for filename in os.listdir(file_path):
    # Check if the file ends with .edf
    if filename.endswith('.edf'):
        file_counter = file_counter+1
        Files.append(filename)
max_values = []
min_values = []
for k in np.arange(file_counter):
    path = os.path.join(file_path, Files[k])
    try:
        f = pyedflib.EdfReader(path)
    except OSError:
        badFiles.append(Files[k])     
Files = [item for item in Files if item not in badFiles]
print(Files)
n = f.signals_in_file
n = n-9
number_of_samples = f.getNSamples()[0]
Nblocks = int((number_of_samples-250)/64)
TotalBlocks=(5*Nblocks + int((223500-250)/64))*n
fuller_data = np.ndarray(shape=(TotalBlocks, 64, 2))
BlockCount=0
count_of = 0
for index, name in enumerate(Files):
    path = os.path.join(file_path, name)
    f = pyedflib.EdfReader(path)
    number_of_samples = f.getNSamples()[0]
    Nblocks = int((number_of_samples-250)/64)
    sigbufs = np.zeros(number_of_samples)
    full_data64 = np.ndarray(shape=(Nblocks*n, 64, 2))
    signalList = []  
    BlockCount = BlockCount+Nblocks*n
    ran = np.ndarray(shape=(21, number_of_samples-250))
    for i in np.arange(n):
        sigbufs[:] = f.readSignal(i, digital=True)
        sigbufs_new = sigbufs[250:]
        #ran[i] = sigbufs_new
        signalList.append(sigbufs_new) 
        labels = np.zeros(number_of_samples-250)
        if name == "DP14.edf":
            sezStart = 79650
            sezEnd = 82250
            labels[sezStart:sezEnd] = 1
        elif name == "DP141.edf":
            sezStart = 103500
            sezEnd = 106500
            labels[sezStart:sezEnd] = 1
        elif name == "DP142.edf":
            sezStart = 223250
            sezEnd = 224750
            labels[sezStart:sezEnd] = 1
        elif name == "DP18.edf":
            sezStart = 93250
            sezEnd = 94000
            labels[sezStart:sezEnd] = 1
        for j in np.arange(Nblocks):
                full_data64[i*Nblocks+j,:,0] = signalList[i][j*64:(j+1)*64]
                full_data64[i*Nblocks+j,:,1] = labels[j*64:(j+1)*64]
    fuller_data[BlockCount-Nblocks*n:BlockCount] = full_data64
    f.close()
train_data, val_data = train_test_split(fuller_data, test_size=0.1, random_state=42)
path = os.path.join(file_path, Files[5])
f = pyedflib.EdfReader(path)
signal_labels = f.getSignalLabels()
# for j in range(3):
#         # Loop through each subplot and plot some data
#         fig, axs = plt.subplots(7, 1, figsize=(10, 20), sharex=True)
#         for i in range(7):
#                 axs[i].plot(ran[(j)*7+i])
#                 axs[i].set_title(f'CH {signal_labels[(j)*7+i]}')
sez_elements_count = np.sum(fuller_data[:, :, 1] == 1)
total_elements_count = TotalBlocks*64  # Divide by the size of the third dimension
percentage_sez = (sez_elements_count / total_elements_count) * 100
hop = ((2600+3000+1500+750)*n)/(TotalBlocks*64)*100
print(percentage_sez, hop)
# Adjust layout
#plt.tight_layout()
# Show the plot
#plt.show()
print(fuller_data.shape)
