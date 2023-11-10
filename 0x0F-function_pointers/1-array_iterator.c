#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates through an array executing function on
 * each element of an array
 * @array: Pointer to array
 * @size: Size of arrary
 * @action: Pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
