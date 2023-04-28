#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at tye beginning of a linked list
 * @head: pointer to the first node in the list
 * @str: to add that in the new node
 *
 * Return: the address of the new element, or Null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = str;
	new->next = (*head);
	(*head) = new;

	return (new);
}
