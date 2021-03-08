#include "dog.h"
#include <stdlib.h>

char *_strcopy(char *src)
{
	int i = 0, len = 0;
	char *dest;

	while (src[i++])
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (!dest)
		return (0);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog created
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *cp_name;
	char *cp_owner;

	if (!name || age < 0 || !owner)
		return (0);

	my_dog = malloc(sizeof(dog_t));
	cp_name = _strcopy(name);
	cp_owner = _strcopy(owner);

	if (!cp_name || !cp_owner || !my_dog)
	{
		if (my_dog)
			free(my_dog);
		if (cp_name)
			free(cp_name);
		if (cp_owner)
			free(cp_owner);
		return (0);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
