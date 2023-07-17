#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabets
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char f;

	for (f = 97; f <= 122; f++)
		putchar(f);
	for (f = 65; f <= 90; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
