#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - remove dog from memory
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
