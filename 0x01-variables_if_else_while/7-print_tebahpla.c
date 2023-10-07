#include <stdio.h>

/**
 * main - Display character based on set conditions
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
		putchar('\n');
	return (0);
}
