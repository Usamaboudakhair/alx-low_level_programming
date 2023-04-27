#include "lists.h"


/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head linked list.
 * @str: string H L L.
 * Return:  the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	size_t tchar;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->str = strdup(str);

	for (tchar = 0; str[tchar]; tchar++)
		;

	add_node->len = tchar;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
