#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for value in a
 * sorted array of integers
 * @array: Pointer to first element of the array
 * @left: Starting index of the [sub]array to search
 * @right: Ending index of the [sub]array to search
 * @value: Value to search for
 *
 * Return: First index where value is located otherwise -1 if value
 * is missing
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for value in a sorted array of integers
 * using the Advanced Binary Search Algorithm
 * @array: Pointer to first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located otherwise -1 if value
 * is missing in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
