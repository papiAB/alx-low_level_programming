#include "dog.h"

/**
 * init_dog - initializations
 * @d: the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void inti_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
