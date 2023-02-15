# 0x09-utf8_validation




### Description 

Python implementation of a function called validUTF8 that checks if a given data set represents a valid UTF-8 encoding.

The validUTF8 function starts by defining a helper function called countonce that counts the number of leading 1's in a byte representation of a UTF-8 encoded character. The countonce function takes a byte as an argument, and using a for loop, counts the number of leading 1's in the byte by shifting the bits of the byte and checking if the most significant bit is 1. The function returns the count of leading 1's as an integer.

The validUTF8 function then iterates through the bytes in the data set, checks the number of leading 1's in the first byte of each multi-byte character using the countonce function, and returns False if the number of leading 1's is not valid. Specifically, if the count of leading 1's is less than 2 or more than 4, the encoding is invalid.

If all bytes are valid UTF-8 encodings, the function returns True. The implementation handles edge cases where the input data is an empty list or a list with a single byte value.

Overall, the function implements the UTF-8 encoding validation algorithm and returns whether or not the input data represents a valid UTF-8 encoding.




# Usage

```
Jaafar@ubuntu:~/0x09-utf8_validation$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))
```

```
Jaafar@ubuntu:~/0x09-utf8_validation$
Jaafar@ubuntu:~/0x09-utf8_validation$ ./0-main.py
True
True
False
Jaafar@ubuntu:~/0x09-utf8_validation$

```

## Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
