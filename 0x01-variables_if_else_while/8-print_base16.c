#include <stdio.h>

/**
 * main - Display characters based on set conditions
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i;
	int c;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
