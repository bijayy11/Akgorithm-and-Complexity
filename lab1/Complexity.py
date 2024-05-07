import matplotlib.pyplot as plt
from insertionSort import insertionSort
from selectionsort import selectionSort
import numpy as np
import time
from invert_array import invert_array

time_taken1=[]
time_taken2=[]
time_taken3=[]

for i in range (0,1000):
    Sorted=np.arange(1,i)
    current_time_seconds1 = time.time()
    #insertionSort(Sorted)
    selectionSort(Sorted)
    current_time_seconds2 = time.time()
    time_taken1.append( current_time_seconds2-current_time_seconds1)

for i in range (0,1000):
    Sorted=np.arange(1,i)
    Sorted_reversed=invert_array(Sorted)
    current_time_seconds1 = time.time()
    #insertionSort(Sorted_reversed)
    selectionSort(Sorted_reversed)
    current_time_seconds2 = time.time()
    time_taken2.append( current_time_seconds2-current_time_seconds1)
    
    
for i in range (0,1000):
    Unsorted = np.random.normal(loc=i/2, scale=i/4, size=i)
    Unsorted = Unsorted.astype(int)
    current_time_seconds3 = time.time()
    #insertionSort(Unsorted)
    selectionSort(Unsorted)
    current_time_seconds4 = time.time()
    time_taken3.append( current_time_seconds4-current_time_seconds3)
    


plt.plot(range(len(time_taken1)),time_taken1, label="Best Case")
plt.plot(range(len(time_taken2)), time_taken2, label="Worst Case")
plt.plot(range(len(time_taken3)), time_taken3, label="Average Case")

# Add labels and title (optional)
plt.xlabel("Input Size")
plt.ylabel("Time Taken")
plt.title("Time Complexity Comparison")

# Add legend
plt.grid(True)
plt.legend()
plt.show()
