#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned integer
 * @b: Binary string
 *
 * Return: Converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int len, base_two;

	if (!b)
		return (0);

	conv = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			conv += base_two;
		}
	}

	return (conv);
}
