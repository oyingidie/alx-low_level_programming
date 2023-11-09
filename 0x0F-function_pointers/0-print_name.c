#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Displays a name
 * @name: String input
 * @f: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
