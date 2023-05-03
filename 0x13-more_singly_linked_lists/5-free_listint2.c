#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *empt;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		empt = *head;
		*head = (*head)->next;
		free(empt);
	}
}
