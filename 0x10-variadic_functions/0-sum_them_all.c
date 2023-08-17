#include <stdio.h>
#include <stdarg.h>
#include <variadic_functions.h>

/**
 *sum_them_all -Prototye Function finds sum of all it's parameters
 *@n: Number of parameters
 *
 *Return: The sum of all its parameters when true
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumpr;
	unsigned int j, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(sumpr, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(sumpr, int);
	}
	va_end(sumpr);
	return (sum);
}
