#include <stdio.h>

/**
 *main - prints natural numbers
 *
 *Return: returns 0 always when successful
 */

int main(void)
{
	int b, add;

	while (b < 1024)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
			add += b;
		b++;
	}
	printf("%d\n", add);
	return (0);
}
