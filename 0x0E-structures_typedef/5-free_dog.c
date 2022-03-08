#include "dog.h"

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->age);
		free(d);
	}
}
