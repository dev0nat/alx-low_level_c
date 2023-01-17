#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function free struct dog's memory
 *
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
