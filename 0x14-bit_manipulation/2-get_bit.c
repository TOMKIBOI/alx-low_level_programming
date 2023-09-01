#include "main.h"

/**
 * get_bit - prints the value of a bit at a given index.
 * @n: unsigned long int .
 * @index: indexing.
 *
 * Return: masked value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int hid, bit_val;

	if (index >= sizeof(int) * 8)
	{
		return (-1);
	}

	hid = 1UL << index;
	bit_val = (n & hid) ? 1 : 0;

	return (bit_val);
}
