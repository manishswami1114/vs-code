# We need install numpy in order to import it
import numpy as np

# input two matrices
r=30000
c=30000
arr1=np.random.rand(r,c)
arr2=np.random.rand(r,c)
arr3=np.random.rand(r,c)

print(np.matmul(arr1,arr2,arr3))
