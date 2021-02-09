#include "holberton.h"

int main(){
	char txt[] = "Holberton";
	int i = 0;

	for (i = 0; txt[i] != '\0'; ++i)	
		_putchar( txt[i] );
	_putchar('\n');
	return (0);
}
