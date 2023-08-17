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
	va_list ls;
	unsigned int j, sum = 0;

	va_start(ls, n);

	if (n == 0)
	{
		return (0);
	}
	for (j = 0; j < n; j++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}
