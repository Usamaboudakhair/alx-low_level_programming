#include "lists.h"


/**
 * print_list - prints all the elements of a `list_t list.
 * @h: singly linked listss ,pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t numb_node;

	numb_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numb_node++;
	}
	return (numb_node);
}
