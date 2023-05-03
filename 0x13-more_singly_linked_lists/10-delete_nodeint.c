#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: points the first node in the list
 * @index: index of nodes to be deleted
 *
 * Return: 1 if it's successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *empt = *head;
	listint_t *new = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(empt);
		return (1);
	}

	while (s < index - 1)
	{
		if (empt || !(empy->next)
				return (1);
				empt = empt->next;
				s++;
				}

				new = empt->next;
				empt->next = new->next;
				free(new)

				return (1);
				}
