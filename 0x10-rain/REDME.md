# 0x10. Rain


The rain function takes a list of non-negative integers representing the heights of walls and calculates the amount of water that can be trapped between the walls when it rains. It follows the below algorithm:

Initializes two arrays left and right of the same size as the input array walls. These arrays will contain the maximum heights of walls to the left and right of the current wall respectively.

Iterates over the input array walls and fills the left array with the maximum height seen so far to the left of each wall.

Iterates over the input array walls in reverse order and fills the right array with the maximum height seen so far to the right of each wall.

Iterates over the input array walls and for each wall, calculates the amount of water it can hold using the formula min(left[i], right[i]) - walls[i]. If this value is negative, sets it to zero since the wall cannot hold negative water.

Sums up the amount of water that each wall can hold and returns the result.

The time complexity of this algorithm is O(n) and the space complexity is O(n), where n is the length of the input array walls.


## Demo

```
jaafar@ubuntu:~/0x10$ cat 0_main.py

#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))



jaafar@ubuntu:~/0x10$ 
jaafar@ubuntu:~/0x10$ ./0_main.py
6
6
jaafar@ubuntu:~/0x10$ 

```

### Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
