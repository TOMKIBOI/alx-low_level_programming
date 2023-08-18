#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: data type format
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *tom = "", *it;
	va_list prany;

	va_start(prany, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", tom, (char)va_arg(prany, int));
				break;
			case 'i':
				printf("%s%d", tom, va_arg(prany, int));
				break;
			case 'f':
				printf("%s%f", tom, va_arg(prany, double));
				break;
			case 's':
				it = va_arg(prany, char*);
				if (!it)
				{
					it = "(nil)";
				}
				printf("%s%s", tom, va_arg(prany, char*));
				break;
			default:
				i++;
				continue;
		}
		tom = ", ";
		i++;
	}
	printf("\n"), va_end(prany);
}
