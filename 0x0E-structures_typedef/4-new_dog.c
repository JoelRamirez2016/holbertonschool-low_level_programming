#include "dog.h"
#include <stdlib.h>

char *_strcopy(char *src);

/**
 * _strcopy - copy a string
 * @src: string to copy
 * Return: the new dog created
*/

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

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (0);

	cp_name = _strcopy(name);

	if (!cp_name)
	{
		free(my_dog);
		return (0);
	}

	cp_owner = _strcopy(owner);

	if (!cp_owner)
	{
		free(cp_name);
		free(my_dog);
		return (0);
	}

	my_dog->name = cp_name;
	my_dog->age = age;
	my_dog->owner = cp_owner;

	return (my_dog);
}
