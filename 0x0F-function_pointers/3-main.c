#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments of the program
 * @argv: arguments of the program
 * Return: 98 if the number of arguments is wrong
 * 99 if the operator is invalid
 * 100 if the user tries to divide (/ or %) by 0
 * otherwise 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, resultado;
	char *operador;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operador = argv[2];
	num2 = atoi(argv[3]);

	if (!get_op_func(operador) || operador[1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operador == '/' || *operador == '%') && !num2)
	{
		printf("Error\n");
		exit(100);
	}
	resultado = get_op_func(operador)(num1, num2);
	printf("%i\n", resultado);
	return (0);
}
