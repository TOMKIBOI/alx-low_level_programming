#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true, else return -1
 * @array: array pointer
 * @size: elements size in array
 * @cmp: pointer to function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
