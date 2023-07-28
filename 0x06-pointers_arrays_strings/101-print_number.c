#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int d;

	d = n;

	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}
	if (d / 10 != 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
