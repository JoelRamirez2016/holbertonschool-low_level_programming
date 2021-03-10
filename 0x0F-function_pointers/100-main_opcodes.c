#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments of the program
 * @argv: arguments of the program
 * Return: 1 If the number of argument is not the correct one
 *	2 if the number of bytes is negative, otherwise 0
 */

int main(int argc, char *argv[])
{
	int (*selfMain)(int, char**) = main;
	int i, n_opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_opcodes = atoi(argv[1]);

	if (n_opcodes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_opcodes; i++)
	{
		printf("%02x", *(unsigned char *)(selfMain + i));

		if (i + 1 != n_opcodes)
			printf(" ");
	}

	printf("\n");
	return (0);
}

