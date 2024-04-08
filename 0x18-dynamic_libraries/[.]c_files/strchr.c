#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: Always 0 (SUCCESS)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
