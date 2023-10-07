#include <stdio.h>

/**
 * main - Display characters based on set condition
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i = 97, c = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
