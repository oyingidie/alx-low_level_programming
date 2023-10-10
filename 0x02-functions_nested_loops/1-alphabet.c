#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Display inputted alphabet
 *
 * Return: Always 0 (SUCCESS)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
