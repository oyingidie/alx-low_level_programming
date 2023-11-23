#include "main.h"

/**
 * clear_bit - Clears the bit value at specified index to 0
 * @n: Pointer to an unsigned long integer
 * @index: Index
 *
 * Return: 1 (SUCCESS), -1 (ERROR)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
