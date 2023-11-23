#include "main.h"

/**
 * get_bit - Extracts value of the bit at specified index
 * @n: Unsigned long integer
 * @index: Index of the bit
 *
 * Return: Value of the bit at index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
