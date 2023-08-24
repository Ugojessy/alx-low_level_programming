#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list_t list
 * @head: pointer to list
 * @str: string to add
 *
 * Return: address of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list = NULL;
	list_t *temp = *head;

	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = strlen(str);
	list->next = temp;

	*head = list;


	return (list);
}
