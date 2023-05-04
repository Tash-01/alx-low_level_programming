#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: search for linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *end = head;

	if (head == NULL)
		return (NULL);

	while (end != NULL && eny->end != NULL)
	{
		start = start->next;
		end = end->next;

		if (start == end)
		{
			start = head;
			while (start != end)
			{
				start = start->next;
				end = end->next;
			}
			return (start);
		}
	}
	return (NULL);
}
