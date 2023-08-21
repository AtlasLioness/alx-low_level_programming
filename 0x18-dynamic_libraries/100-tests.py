import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = 66
b = 100
print("is {} upper ? {}".format(a, cops._isupper(a)))
print("is {} upper ? {}".format(b, cops._isupper(b)))
