#include "main.h"

/**
  * _strlen_recursion - Counts number of characters in string
  * @s: String input
  *
  * Return: Length of string
  */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
	l++;
	l += _strlen_recursion(s + 1);
	}

	return (l);
}
