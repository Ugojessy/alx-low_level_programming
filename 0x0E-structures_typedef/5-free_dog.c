#include "dog.h"

/**
 * free_dog - frees a dog struct
 * @d: the dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
