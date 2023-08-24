#include "lists.h"

/**
 * list_len - prints a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *list = h;
	size_t count = 0;

	while (list)
	{
		count++;
		list = list->next;
	}

	return (count);
}
