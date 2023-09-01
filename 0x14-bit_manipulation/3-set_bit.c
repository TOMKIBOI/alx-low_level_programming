#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at agiven index
* @n: pointer to unsigned long integer
* @index: indexing bits
* Return: 1 if successfull, or -1 if unsuccesfull
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hid;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	hid = 1UL << index;

	*n |= hid;

	return (1);
}
