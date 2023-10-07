#include <stdio.h>

/**
 * main - Display characters based on set condition
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
