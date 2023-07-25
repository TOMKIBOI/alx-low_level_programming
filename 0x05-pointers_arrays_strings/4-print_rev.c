#include "main.h"
/**
 * print_rev- print string in reverse
 * @s: input string
 *
 */

void print_rev(char *s)
{
	int b = 0;

	while (b >= 0)
	{
		if (s[b] == '\0')
			break;
		b++;
	}
	for (b--; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
