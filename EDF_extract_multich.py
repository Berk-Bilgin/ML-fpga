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
n = f.signals_in_file
n = n-9
number_of_samples = f.getNSamples()[0]
Nblocks = int(number_of_samples/32)
TotalBlocks=(5*Nblocks + int(223500/32))
BlockCount=0
full_data = np.ndarray(shape=(TotalBlocks, 21, 32, 1))
for index, name in enumerate(Files):
    path = os.path.join(file_path, name)
    f = pyedflib.EdfReader(path)
    number_of_samples = f.getNSamples()[0]
    Nblocks = int(number_of_samples/32)
    sigbufs = np.zeros(number_of_samples)
    signalList = []  
    for i in np.arange(n):
        sigbufs[:] = f.readSignal(i, digital=True)
        signalList.append(sigbufs) 
        for j in np.arange(Nblocks):
                full_data[j+BlockCount][i] = signalList[i][j*32:(j+1)*32].reshape(32, 1)
    BlockCount = BlockCount+Nblocks
    f.close()
train_data, test_data = train_test_split(full_data, test_size=0.05, random_state=42)
print(train_data.shape, test_data.shape)
plt.plot(train_data[0][10])
plt.show()