#include <stdio.h>

/**
 * main - Display characters based on set conditions
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
		putchar('\n');
	return (0);
}
