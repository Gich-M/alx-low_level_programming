#!/usr/bin/python3

def island_edges(grid):
    """
    Returns the edges of the island described in grid.

    0 represents water and 1 represents land.

    Args:
        grid (list): A list of integers.
    Return:
        edges of the island in grid.
    """
    length = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                edges += 1
                size += 1
                if i > 0 and grid[i-1][j] == 1:
                    edges += 1
                if i < length-1 and grid[i+1][j] == 1:
                    edges += 1

    perimeter = size * 4 - edges * 2

    return perimeter
