#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dogs
 * @d: the cute dog I am freeing
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
