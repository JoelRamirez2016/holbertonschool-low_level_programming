#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the data of the dog
 * @d: struct dog to print
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->name)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n",  d->owner);
}

