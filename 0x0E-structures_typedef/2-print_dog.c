#include <stdio.h>

/**
 * print_dog - print the data of the dog
 * @d: struct dog to print
*/

void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}

