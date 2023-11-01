#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars filled with a specific char
 * @size: Size of array
 * @c: Character to assign
 *
 * Return: Pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
