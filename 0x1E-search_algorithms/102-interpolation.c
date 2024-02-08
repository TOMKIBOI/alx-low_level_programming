#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t posi, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		posi = (size_t)(low + f);
		printf("Value checked array[%d]", (int)posi);

		if (posi >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[posi]);
		}

		if (array[posi] == value)
			return ((int)posi);

		if (array[posi] < value)
			low = posi + 1;
		else
			high = posi - 1;

		if (low == high)
			break;
	}

	return (-1);
}
