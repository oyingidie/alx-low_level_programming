#include <stdio.h>

/**
 * main - Display characters based on set condition
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char i, c;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
		putchar('\n');
	return (0);
}
