#include <stdio.h>

/**
 * main - prints alphabets without e and q
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char d;

	for (d = 97; d <= 122; d++)
	{
		if (d != 101 && d != 113)
		{
			putchar(d);
		}
	}
	putchar('\n');
	return (0);
}
