#include "main.h"

/**
 * _isdigit - Checks for a digit from zero through nine
 *@c: Character to be checked
 *
 * Return: If digit, or otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
