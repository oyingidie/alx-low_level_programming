#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Destination of string
 * @src: Source of string
 *
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
