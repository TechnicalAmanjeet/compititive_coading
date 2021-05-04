#!/bin/python3

import math
import os
import random
import re
import sys



class Multiset:
    def __init__(self):
        self.M=[]

    def add(self, val):
        # adds one occurrence of val from the multiset, if any
        self.M.append(val)

    def remove(self, val):
        # removes one occurrence of val from the multiset, if any
        if len(self.M):
            if val in self.M:
                self.M.remove(val)

    def __contains__(self, val):
        # returns True when val is in the multiset, else returns False
        if val in self.M:
            return True 
        return False
    
    def __len__(self):
        # returns the number of elements in the multiset
        return len(self.M)

if __name__ == '__main__':