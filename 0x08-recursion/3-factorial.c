#include "main.h"

/**
  * factorial - Displays factorial of an integer
  * @n: Number
  *
  * Return: Factorial, or -1 (ERROR)
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
