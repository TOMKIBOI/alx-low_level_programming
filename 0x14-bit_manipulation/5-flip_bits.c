#include "main.h"

/**
* flip_bits - returns of bits you would need to flip .
* @n: input
* @m: input
*
* Return: sreturn the exllucive logical gate input
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or = n ^ m;
	int gate = 0;

	while (exclusive_or > 0)
	{

		gate += exclusive_or & 1;
		exclusive_or >>= 1;
	}
	return (gate);
}
