#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 * Return: nothing
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
