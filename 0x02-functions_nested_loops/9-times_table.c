#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 *times_table - print 9 times table
 *
 */

void times_table(void)
{
	int a, b, prod;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			prod = a * b;
			if (prod < 10 && b != 0)
				_putchar(' ');
			if (prod < 10)
				_putchar(prod + '0');
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
