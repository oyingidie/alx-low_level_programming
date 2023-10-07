#include <stdio.h>

/**
 * main - Display characters based on set conditions
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
