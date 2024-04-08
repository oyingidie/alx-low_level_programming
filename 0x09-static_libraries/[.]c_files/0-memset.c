#include "main.h"

/**
 * _memset - Fills a block of memory with constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte
 * @n: Number of bytes to be changed
 *
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
