#include <stdio.h>

/**
 *main - lowercase in reverse
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char d;

	for (d = 122; d >= 97; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
