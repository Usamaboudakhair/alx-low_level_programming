#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *currents;

	while ((currents = head) != NULL)
	{
		head = head->next;
		free(currents->str);
		free(currents);
	}
}
