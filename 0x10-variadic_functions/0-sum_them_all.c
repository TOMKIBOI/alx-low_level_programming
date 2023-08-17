#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - prototype function to sum all arguements
 * @n: constant interger
 * Return: sum of all intergers
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumpr;
	unsigned int j;
	int sum = 0;

	va_start(sumpr, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(sumpr, int);
	}
	va_end(sumpr);
	return (sum);
}
