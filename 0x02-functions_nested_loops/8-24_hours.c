#include "main.h"
/**
 *jack_bauer - print every minutes
 *
 */
void jack_bauer(void)
{
	int a, l;

	a = 0;
	while (a < 24)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(58);
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
		a++;
	}
}
