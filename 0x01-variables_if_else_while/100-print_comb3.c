#include <stdio.h>

/**
 * main - Display combination of characters as conditioned
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i, c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			putchar(i);
			putchar(c);
			if (i != '8' || c != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
