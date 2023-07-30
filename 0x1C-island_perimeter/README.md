# 0x1C. Island Perimeter

## Python function named island_perimeter that calculates the perimeter of an island described in a given grid.


```
Jaafar@ubuntu:~/0x1C$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
island_perimeter = __import__('0-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

Jaafar@ubuntu:~/0x1C$ 
Jaafar@ubuntu:~/0x1C$ ./0-main.py
12
Jaafar@ubuntu:~/0x1C$
```
### The task requires the following conditions to be met:

* The input grid is a list of lists of integers, where 0 represents water and 1 represents land.
* Each cell in the grid is square, with a side length of 1.
* Cells are connected horizontally or vertically (not diagonally).
* The grid is rectangular, with its width and height not exceeding 100.
* The grid is completely surrounded by water.
* There is only one island (or nothing), meaning there are no disconnected land masses.
* The island doesn't have "lakes," which means there is no water inside the island that isn't connected to the water surrounding the island.
* The island_perimeter function works by iterating through the grid and calculating the perimeter of the island using a simple algorithm:

##### Initialize total_sum and limit to 0. total_sum will accumulate the total number of land cells (1s) in the grid, and limit will count the number of adjacent land cells.
##### Iterate through each row in the grid and calculate the sum of values (number of land cells) in the current row. Add this sum to total_sum.
##### For each land cell (1) found during the iteration, check if the cell's left and upper neighbors are also land cells. If they are, increment limit by 1 for each adjacent land cell.
##### Finally, calculate the perimeter of the island using the formula: perimeter = total_sum * 4 - limit * 2.
##### The given test case creates a grid representing an island, and then it calls the island_perimeter function with this grid as input. The function should calculate the perimeter of the island correctly and print the result, which is 12 in this case.

###### It's important to note that the code satisfies the given task requirements and returns the correct perimeter for the provided test case. Additionally, the algorithm has a time complexity of O(N), where N is the total number of cells in the grid, which makes it efficient for grids with reasonable sizes.

### Made by [Jaafar Fares](https://jaafarfares.github.io/) for [Holberton School](https://www.holbertonschool.com/)
