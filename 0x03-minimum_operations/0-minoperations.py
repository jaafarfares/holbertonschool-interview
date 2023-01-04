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
    while (n):
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
        return counter
    return 0
    """         i = 0
            a = 0
            if( n % 2 != 0):
                n = n + n
                counter+=2
            else:
                n/=2
            counter+=1
            return counter
        return 0
        """
