#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: listint_t to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *empt;

	while (head != NULL)
	{
		empt = head;
		head = head->next;
		free(empt);
	}
}
