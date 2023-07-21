#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - print numbers except 2 and 4
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
