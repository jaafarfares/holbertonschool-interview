#!/usr/bin/python3
"""
determines if a given data set represents a valid UTF-8 encoding
"""

def validUTF8(data):
    """_summary_
    Return: True if data is a valid UTF-8 encoding,
    else return False
    """
    def countonce(num):
        """count the number of leading 1's in a byte
        representation of a UTF-8 encoded character.
        """
        count = 0
        for i in range(7, -1, -1):
            if num & (1 << i):
                count += 1
            else:
               break
        return count
    count = 0
    for a in data:
        if not count:
            count = countonce(a)
            if count == 0:
                continue
            if count == 1 or count > 4:
                return False
        else:
            count -= 1
            if countonce(a) != 1:
                return False
    return count == 0              
                
