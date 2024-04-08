#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be checked
 *
 * Return: If a letter, or otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
