#include "main.h"

/**
 * _strlen - Displays the length of a string
 * @s: String
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
