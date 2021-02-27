#include <stdio.h>

/**
 * main - entry point
 * Description: prints all received arguments
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

