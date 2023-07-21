#include "main.h"

/**
 *print_number - prints a number
 *@n: a number to print
 */
void print_number(int n)
{
	short b = n;

	if (n < 0)
	{
		n *= -1;
		b = n;
		_putchar('-');
	}
	b /= 10;
	if (b != 0)
		print_number(b);
	_putchar ((short) n % 10 + '0');

}
