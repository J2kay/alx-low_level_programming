#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds information about a dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
