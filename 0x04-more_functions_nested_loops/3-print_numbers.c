#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints 0 to 9
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
