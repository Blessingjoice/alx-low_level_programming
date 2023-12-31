#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: struct of the cute dog information.
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner's name
 * Description: General info about a cute dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
