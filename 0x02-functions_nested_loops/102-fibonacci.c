#include <stdio.h>

/**
 *main - prints fibonacci series
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b = 1, c = 2, result;

	for (a = 0; a < 50; a++)
	{
		if (a != 49)
			printf("%ld, ", b);
		if (a == 49)
			printf("%ld\n", b);
		result = b + c;
		b = c;
		c = result;
	}
	return (0);
}
