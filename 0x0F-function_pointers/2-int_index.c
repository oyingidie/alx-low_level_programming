#include "function_pointers.h"

/**
 * int_index - Searches for integer in array
 * @array: Pointer to array
 * @size: Size of elements in array
 * @cmp: Pointer to comparison function
 *
 * Return: Index of first element. -1, if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
