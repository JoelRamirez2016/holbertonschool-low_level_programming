#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print last digit for rand number
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n, ld;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
    char * text;
	
	if (ld > 5){
		char txt[] = "is greater than 5";
		text = txt;
	}else if (ld == 0){
		char txt[] = "is 0";
		text = txt;
	}else{
		char txt[] = "is less than 6 and not 0";
		text = txt;
    }

	printf("Last digit of %i is %i and %s",n,ld,text);

	return (0);
}
