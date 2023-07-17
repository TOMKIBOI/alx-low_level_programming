#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 *Return: always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 97; d <= 122; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
