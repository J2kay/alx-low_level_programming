#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates new dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to newly allocated memory
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_copy1, *new_copy2;

	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	new_copy1 = malloc((strlen(name) + 1) * sizeof(char));
	if (new_copy1 == NULL)
		return (NULL);

	strcpy(new_copy1, new_dog->name);

	new_copy2 = malloc((strlen(owner) + 1) * sizeof(char));
	if (new_copy2 == NULL)
	{
		free(new_dog);
		free(new_copy1);
		free(new_copy2);
		return (NULL);
	}
	strcpy(new_copy2, new_dog->owner);

	return (new_dog);
}
