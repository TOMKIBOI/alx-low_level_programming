#include "main.h"
#include <ctype.h>

/**
 *_islower - checks for lowercase
 *
 *ctype: is the argumentprototype to check
 *
 *Return: 1 for lowercase and 0 otherwise
 */
int _islower(int a)
{
	if (islower(a))
		return (1);
	else
		return (0);
}
