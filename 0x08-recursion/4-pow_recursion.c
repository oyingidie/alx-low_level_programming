#include "main.h"

/**
  * _pow_recursion - Calculates power of a number, one
  * multiplication step at a time
  * @x: Integer
  * @y: Number of multiplication steps
  *
  * Return: Power, or -1
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
