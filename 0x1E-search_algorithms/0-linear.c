#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear Search Algorithm
 * @array: Pointer to first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, -1 if value
 * is not in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
