#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for dog_t variable
 * @d: Pointer to variable
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
