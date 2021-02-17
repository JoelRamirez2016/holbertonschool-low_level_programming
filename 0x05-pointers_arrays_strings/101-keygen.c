#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: creates a text whose 
 * sum of characters in ASCII is exactly 2772 
 * Return: 0 Always
*/

int main()
{
	char pswd[200];
	int randn, sum = 0, i = 0;

	srand(time(0));

	do {
		randn = rand() % (127 - 33) + 33;
		pswd[i++] = randn;
		sum += randn;
	} while (sum < 2645);

	pswd[i++] = 2772 - sum;

	printf("%s", pswd);
	return 0;
}

