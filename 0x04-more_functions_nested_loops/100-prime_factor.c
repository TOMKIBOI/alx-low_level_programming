#include "main.h"
#include <stdio.h>


/**
 *main - checks for largest prime factor and prints result
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	long number = 612852475143;
	long i, largestPrime = 0;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestPrime = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		largestPrime = number;
	}

	printf("%ld\n", largestPrime);
	return (0);
}
