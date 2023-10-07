#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * obtain_last_number - Generate last digit
 * @number: The variable to check
 */

void obtain_last_number(int number)
{
	int last;

	last = number % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
				number, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, number, last);
	else
		printf("Last digit of %d is %d and is 0\n"
				, number, last);
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
	obtain_last_number(n);
	return (0);
}
