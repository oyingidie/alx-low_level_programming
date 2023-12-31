#include <stdio.h>

/**
 * main - Program executes to display size of various types
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %i byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n",
	       (int) sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", (int) sizeof(float));
	return (0);
}
