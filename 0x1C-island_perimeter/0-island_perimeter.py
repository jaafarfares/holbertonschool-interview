#!/usr/bin/python3
"""
calculate an island parameter based on a grid list
"""

def island_perimeter(grid):
    """
    Implement island traversal
    """
    if not grid or not any(1 in row for row in grid):
        return 0
    def dfs(row, col):
        """
        depth first Search DFS or breadth first Search
        to traverse the grid and identify islands
        """
        if row < 0 or row >= len(grid) or col < 0 or col >= len(grid[0]) or grid[row][col] == 0:
            return 1

        if grid[row][col] == -1:
            return 0

        grid[row][col] = -1

        perimeter = (
            dfs(row - 1, col) +
            dfs(row + 1, col) +
            dfs(row, col - 1) +
            dfs(row, col + 1)
        )

        return perimeter

    # Step 3: Calculate the perimeter of each island
    island_perimeters = []
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter = dfs(row, col)
                island_perimeters.append(perimeter)

    # Step 4: Sum up the perimeters to get the total island parameter
    total_island_parameter = sum(island_perimeters)
    return total_island_parameter
