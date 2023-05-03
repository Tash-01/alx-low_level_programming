#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in linked list
 * @index: index of node, starting with 0
 *
 * Return: Null if node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *empt = head;

	for (len = 0; empt != (NULL) && len < index; len++)
		empt = empt->next;

	if (len == index)
		return (empt);

	return (NULL);
}
