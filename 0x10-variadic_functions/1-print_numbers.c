#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed.
 * @n: integers passed to the function.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prnum;
	unsigned int j;

	va_start(prnum, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(prnum, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(prnum);
}
