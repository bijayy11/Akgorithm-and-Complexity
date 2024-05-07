import math
def invert_array(A):
    size=len(A)
    for i in range(0,math.ceil(size//2)):
        temp=A[size-i-1]
        A[size-i-1]=A[i]
        A[i]=temp
    return A
    