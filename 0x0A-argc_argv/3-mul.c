#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: multiplies two numbers
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program
 * Return: 1 if have not 2 arguments, otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
