#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - prints a diagonal in the terminal
 *@n: number of \ printed
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
