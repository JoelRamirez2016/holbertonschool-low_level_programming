#!/usr/bin/python3
"""This module define the function island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    p = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    p += 1
                if i + 1 >= len(grid) or grid[i + 1][j] == 0:
                    p += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    p += 1
                if j + 1 >= len(grid[i]) or grid[i][j + 1] == 0:
                    p += 1
    return p
