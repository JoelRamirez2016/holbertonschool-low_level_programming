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
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (!d->name)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}

