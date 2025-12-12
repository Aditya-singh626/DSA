import numpy as np

# Sample data
arr = np.array([10, 20, 30, 40, 50])

# 1) Using np.mean() - calculates arithmetic mean
print("=== Using np.mean() ===")
mean_result = np.mean(arr)
print(f"Mean: {mean_result}")

# 2) Using np.average() - also calculates mean (similar to mean)
print("\n=== Using np.average() ===")
avg_result = np.average(arr)
print(f"Average: {avg_result}")

# 3) Key difference: np.average() supports weights
print("\n=== np.average() with weights ===")
weights = np.array([1, 2, 3, 4, 5])
weighted_avg = np.average(arr, weights=weights)
print(f"Weighted Average: {weighted_avg}")
# Calculation: (10*1 + 20*2 + 30*3 + 40*4 + 50*5) / (1+2+3+4+5)

# 4) 2D array examples
print("\n=== 2D Array Examples ===")
arr2d = np.array([[10, 20, 30],
                   [40, 50, 60]])

print(f"Mean of entire array: {np.mean(arr2d)}")
print(f"Mean along axis 0 (columns): {np.mean(arr2d, axis=0)}")
print(f"Mean along axis 1 (rows): {np.mean(arr2d, axis=1)}")

print(f"\nAverage of entire array: {np.average(arr2d)}")
print(f"Average along axis 0: {np.average(arr2d, axis=0)}")
print(f"Average along axis 1: {np.average(arr2d, axis=1)}")