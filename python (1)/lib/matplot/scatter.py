import matplotlib.pyplot as plt
import numpy as np  
x1 =np.array([1,2,3,4,5])
y1 =np.array([5,7,4,6,8])
x2=np.array([3,4,5,6,7])
y2=np.array([6,2,7,5,9])
plt.scatter(x1,y1,label="First",color='r')
plt.scatter(x2,y2,label="Second",color='g')
plt.xlabel("X-axis")    
plt.ylabel("Y-axis")