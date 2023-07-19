#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int n;
	char a;

	n = 0;
	while (n < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}
