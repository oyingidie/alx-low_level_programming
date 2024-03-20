#!/usr/bin/python3
# island perimeter measuring function

def island_perimeter(grid):
    """
    return the perimeter of an island
    the 'grid' is a list of list of integers
    water zone is represented with 0 & land zone with 1
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                elif (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
