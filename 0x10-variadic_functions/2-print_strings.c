#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	char *prn;
	unsigned int k;

	va_start(lst, n);

	for (k = 0; k < n; k++)
	{
		prn = va_arg(lst, char *);

		if (prn == NULL)
			printf("(nil)");
		else
			printf("%s", prn);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n"), va_end(lst);
}
