#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - Retrieves the biggest number
 * @usrn: Username
 * @len: Length of username string
 *
 * Return: Biggest number
 */

int f4(char *usrn, int len)
{
	int ch = *usrn, vch = 0;
	unsigned int rand_num;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - Multiplies each character of the username
 * @usrn: Username
 * @len: Length of username
 *
 * Return: Multiplied character
 */

int f5(char *usrn, int len)
{
	int ch, vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - Generates a random character
 * @usrn: Username
 *
 * Return: Random character
 */

int f6(char *usrn)
{
	int ch, vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Special entry point for the program
 * @argc: Number of command-line arguments
 * @argv: Pointer to an array
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;

	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}

	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	vch = 0;

	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}

	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';

	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);

	return (0);
}
