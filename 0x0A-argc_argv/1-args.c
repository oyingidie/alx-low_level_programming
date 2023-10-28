#include <stdio.h>
#include "main.h"

/**
 * main - Displays number of arguments passed to it
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
