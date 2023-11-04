#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: Number of bytes
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
