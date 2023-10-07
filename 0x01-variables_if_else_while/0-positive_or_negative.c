#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * checkNumber - Checks if number is positive, negative or zero
 * @number: The variable to check
 */

void checkNumber(int number)
{
	if (number > 0)
		printf("%d is positive\n", number);
	else if (number == 0)
		printf("%d is zero\n", number);
	else
		printf("%d is negative\n", number);
}

/**
 * main - Generate random number
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	checkNumber(n);
	return (0);
}
