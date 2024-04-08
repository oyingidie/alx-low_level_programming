#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory
 * @src: Source memory
 * *@n: Number of bytes
 *
 * Return: Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
