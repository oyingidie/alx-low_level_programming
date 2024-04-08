#include "main.h"

/**
 * _strncat - Concatenates two strings using most bytes from a string
 * @dest: Destination string
 * @src: Source string
 * @n: Size of function
 *
 * Return: Pointer to final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
