#include "main.h"

/**
 * _isupper - Checks for uppercase letter(s)
 * @c: Character to be checked
 *
 * Return: If lowercase, or otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
