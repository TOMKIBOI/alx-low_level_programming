#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: *p to a string of 0 and 1 chars
* Return: returns converted number or 0 if it fails.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		converted_num = converted_num * 2 + (b[x] - '0');
	}
	return (converted_num);
}
