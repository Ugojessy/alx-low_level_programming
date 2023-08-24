#include "lists.h"

/**
 * free_list - adds a new node at the end of the list_t list
 * @head: pointer to list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head, *temp2;

	if (head)
	{
		while (temp->next)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2->str);
			free(temp2);
		}

		free(temp->str);
		free(temp);
	}
}
