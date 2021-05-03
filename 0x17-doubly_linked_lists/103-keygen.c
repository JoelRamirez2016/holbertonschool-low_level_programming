#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - create a keygen for a username
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	char *b = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int len = strlen(argv[1]);
	char result[6];
	int i, var4, rnd;
	int sum = 0, mul = 1, pw = 0, max = 0;

	for (i = 0; i < len; i++)
	{
		sum += argv[1][i];
		mul *= argv[1][i];
		pw += argv[1][i] * argv[1][i];
		max = max < argv[1][i] ? argv[1][i] : max;
	}
	srand(max ^ 0xe);
	var4 = rand() & 0x3f;

	for (i = 0; i < argv[1][0]; i++)
		rnd = rand();

	result[0] = b[(len ^ 0x3b) & 0x3f];
	result[1] = b[(sum ^ 0x4f) & 0x3f];
	result[2] = b[(mul ^ 0x55) & 0x3f];
	result[3] = b[var4 & 0x3f];
	result[4] = b[(pw ^ 0xef) & 0x3f];
	result[5] = b[(rnd ^ 0xe5) & 0x3f];

	printf("%s", result);
	return (0);
}

