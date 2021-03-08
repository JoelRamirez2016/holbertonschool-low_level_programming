#include <stdlib.h>

/**
 * free_dog - delete a struct dog in allocated memory
 * @d: struct dog to delete
*/

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
