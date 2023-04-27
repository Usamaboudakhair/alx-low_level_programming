#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: head linked list.
 * @str: string.
 * Return:  the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *temps;
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
	add_node->next = NULL;
	temps = *head;

	if (temps == NULL)
	{
		*head = add_node;
	}
	else
	{
		while (temps->next != NULL)
			temps = temps->next;
		temps->next = add_node;
	}
	return (*head);
}
