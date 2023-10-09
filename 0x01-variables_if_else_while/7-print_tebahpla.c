#include <stdio.h>

/**
 * main - Display character based on set conditions
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
