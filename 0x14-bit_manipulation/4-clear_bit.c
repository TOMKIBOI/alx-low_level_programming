#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: pointer to unsigned long integer.
* @index: indexing
*
* Return: 1 if successfull, or -1 if unsuccessful.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hid;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	hid = ~(1UL << index);

	*n &= hid;

	return (1);
}
