#include <stdio.h>

/**
 *main - prints different comb of 2 digits
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int a, d;

	for (a = 0; a < 9; a++)
	{
		for (d = a + 1; d < 10; d++)
		{
			putchar((a % 10) + '0');
			putchar((d % 10) + '0');
			if (a != 8 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
