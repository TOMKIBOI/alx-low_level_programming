#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints triangles
 *@size: triangle size
 */

void print_triangle(int size)
{
	int c, d, num;

	if (size <= 0)
		printf("\n");
	else
	{
		num = size;
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				if (d >= num || d == num - 1)
					printf("#");
				if (d < num - 1)
					printf(" ");
			}
			num--;
			printf("\n");
		}
	}
}
