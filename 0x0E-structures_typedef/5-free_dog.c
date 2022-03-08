#include "dog.h"

/**
 * free_dog- free a dog
 * @d: pointer to structure
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
