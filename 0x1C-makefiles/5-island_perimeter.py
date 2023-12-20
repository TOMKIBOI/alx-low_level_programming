#!/usr/bin/python3
""" This Module that contains island_perimeter function """


def island_perimeter(grid):
    """ This Function  returns the perimeter of island """
    perimeter = 0

    irows = len(grid)

    if grid != []:
        icolumns = len(grid[0])

    for a in range(irows):
        for b in range(icolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == irows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == icolumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter

