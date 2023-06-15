#include "lists.h"

/**
 * Free_dlistint -frees a double linked list
 * @head: pointer to the list to free
 */
void free_dlistint(dlistint_t *head);
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
