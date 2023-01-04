#!/usr/bin/python3
"""
Minimum Operations :)
"""


def minOperations(n):
    """
    function to count minimum operations to duplicate the character H
    till it reach the n number
    """
    counter = 0
    i = 1
    
    if (n <= 0):
        return 0
    
    
    while i < n:
        if (i % 2 != 0):
            a = i
            counter = counter + 2
            i = i * 2
            if i + (a * 2) == n:
                counter = counter + 2
                return counter
        if (i % 2 == 0):
            counter = counter + 1
            i = i + a
            a = i
        else:
            return 0
    return counter
