#include "main.h"

/**
 * set_bit - Sets the value of a bit at specified index to 1
 * @n: Pointer to an unsigned long integer
 * @index: Index
 *
 * Return: 1 (SUCCESS), or -1 (ERROR)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
