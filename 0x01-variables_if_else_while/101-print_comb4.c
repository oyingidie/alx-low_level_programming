#include <stdio.h>

/**
 * main - Display combination of characters as conditioned
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i, c, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			for (x = c + 1; x <= '9'; x++)
			{
				putchar(i);
				putchar(c);
				putchar(x);
				if (i != '7' || c != '8' || x != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
