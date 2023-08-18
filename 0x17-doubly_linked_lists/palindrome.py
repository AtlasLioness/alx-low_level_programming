#!/usr/bin/python3

largestpal = 0
for a in range(999, 99, -1):
    for b in range(a, 99, -1):
        mul = a * b
        if mul > largestpal:
            storeinstr = str(mul)
            if storeinstr == storeinstr[::-1]:
                largestpal = mul
print(largestpal)
