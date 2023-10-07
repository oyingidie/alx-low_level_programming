#include <stdio.h>

/**
 * main - Display characters based on set condition
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
		putchar('\n');
	return (0);
}
