#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    z=list()  
    k=s.split(' ')
    for i in k:
        t=list(i)
        t[0]=chr(ord(t[0])-32)
        z.append("".join(t))
    return " ".join(z)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
