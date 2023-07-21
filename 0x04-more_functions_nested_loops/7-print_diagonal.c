#include "main.h"

/**
 *print_diagonal - prints a diagonal in the terminal
 *@n: number of \ printed
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
			{
				if (d == c)
				{
					_putchar('\\');
				}
				else if (d < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
