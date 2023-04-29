#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *emp;

	while (head)
	{
		emp = head->next;
		free(head->str);
		free(head);
		head = emp;
	}
}
