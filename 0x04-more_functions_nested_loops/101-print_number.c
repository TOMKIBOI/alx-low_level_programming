#include "main.h"

/**
 *print_number - prints a number
 *@n: a number to print
 */
void print_number(int n)
{
	float b = n;

	if (n < 0)
	{
		n *= -1;
		b = n;
		_putchar('-');
	}
	b /= 10;
	if (b != 0)
		print_number(b);
	_putchar((float) n % 10 + '0');

}
