#include "main.h"
#include <stdio.h>

/**
 *print_line - prints _ n times in terminal
 *@n: number of times _ is printed
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(20);
		}
	}
	_putchar('\n');
}
