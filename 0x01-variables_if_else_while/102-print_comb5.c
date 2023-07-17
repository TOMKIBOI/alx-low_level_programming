#include <stdio.h>

/**
 *main - prints two two digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, d;

	for (a = 0; a < 99; a++)
	{
		for (d = a + 1; d < 100; d++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			if (a != 98 || d != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
