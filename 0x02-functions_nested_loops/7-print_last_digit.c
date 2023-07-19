#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_last_digit - find last digit of a number
 *
 *@n: argument prototype for  number argument
 *
 *Return: a
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
		a *= -1;
	_putchar(a + '0');
	return (a);
}
