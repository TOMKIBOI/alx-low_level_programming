#include <stdio.h>
/**
 *main - prints fibonacci sequence
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b = 1, c = 2, result, add = 0;

	for (a = 0; a < 32; a++)
	{
		if (b % 2 == 0)
			add += b;
		result = b + c;
		b = c;
		c = result;
	}
	printf("%ld\n", add);
	return (0);
}
