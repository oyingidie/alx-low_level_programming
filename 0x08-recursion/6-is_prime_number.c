#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if number is prime
 * @n: Number
 *
 * Return: Prime, or otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Checks if a number is a prime
 * @n: Number
 * @i: Divisor
 *
 * Return: Prime, or otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}
