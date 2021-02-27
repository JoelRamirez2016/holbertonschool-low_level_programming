#include <stdio.h>

/**
 * main - entry point
 * Description: prints the number of arguments passed into it
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program, (unused)
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}

