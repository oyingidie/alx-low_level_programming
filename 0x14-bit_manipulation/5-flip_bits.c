#include "main.h"

/**
 * flip_bits - Determines the number of bits to be flipped to get
 * from one number to another
 * @n: First unsigned long integer
 * @m: Second unsigned long integer
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
