import numpy as np
arr = ([1,2,3],
       [4,5,6],
       [7,8,9])
arr2 = ([9,8,7],
        [6,5,4],
        [3,2,1])
arr3 = ([1,2,3,4])
arr4 = ([5,6,7,8])
d= np.array(arr4)
c= np.array(arr3)       
a= np.array(arr)
b= np.array(arr2)
result1 = np.multiply(a,b)  
result2 = np.add(a,b)
result3 = np.subtract(a,b)
result4 = np.divide(a,b) 
sort = np.sort(a, axis=0)  # Sort along the first axis (columns)
sort2 = np.sort(a, axis=1)  # Sort along the second axis (rows)
sort3 = np.sort(a, axis=None)  # Sort the flattened array
union = np.union1d(c,d)  # Union of two arrays
intersection = np.intersect1d(c,d)  # Intersection of two arrays
print(result1)
print(result2)
print(result3)
print(result4)