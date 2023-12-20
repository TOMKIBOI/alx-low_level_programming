#!/usr/bin/python3
"""Func  Module that contains the island_perimeter """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    rows = len(grid)

    if grid != []:
        columns = len(grid[0])

    for a in range(rows):
        for b in range(columns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == rows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == columns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
