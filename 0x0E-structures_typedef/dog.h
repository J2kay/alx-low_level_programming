#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds information about a dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
