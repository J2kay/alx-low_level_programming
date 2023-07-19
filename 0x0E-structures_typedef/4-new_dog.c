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

	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	new_dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
		return (NULL);

	strcpy(new_dog->name, name);

	new_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
