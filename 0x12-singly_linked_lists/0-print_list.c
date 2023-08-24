#include "lists.h"

/**
 * print_list - prints a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *list = h;
	size_t count = 0;

	while (list)
	{
		if (list->str)
			printf("[%d] %s\n", list->len, list->str);
		else
			printf("[0] (nil)\n");
		count++;
		list = list->next;
	}

	return (count);
}
