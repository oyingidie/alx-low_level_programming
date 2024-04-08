#include "main.h"

/**
 * _islower - Checks for lowercase alphabet(s)
 * @c: Character to be checked
 *
 * Return: If lowercase, or otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
