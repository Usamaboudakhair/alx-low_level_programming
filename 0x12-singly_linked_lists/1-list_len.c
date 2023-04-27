#include "lists.h"

/**
 * list_len - prints all the elements of a `list_t list.
 * @h: singly linked listss ,pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t numb_node;

	numb_node = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_node++;
	}
	return (numb_node);
}
