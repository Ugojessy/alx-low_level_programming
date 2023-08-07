#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previous memory
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to the new allocated memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	while (i < new_size && i < old_size)
		i++;

	memcpy(new, ptr, i);
	free(ptr);

	return (new);
}
