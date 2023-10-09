#include <stdio.h>

/**
 * main - Display characters based on set condition
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
