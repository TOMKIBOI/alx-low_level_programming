#include "main.h"
#include <stdio.h>

/**
 *more_numbers - print 14 numbers 10 times
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		a = 0;
		while (a < 15)
		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
	}
}
