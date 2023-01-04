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
    a = 0 
    
    while i < n:
        if n % i == 0:
            a = i
            counter = counter + 1
            i = i * 2
        else:
            i += a
        counter += 1

    return counter
