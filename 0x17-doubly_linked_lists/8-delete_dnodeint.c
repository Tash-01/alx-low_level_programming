#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node ay index od dlistint_t list
 * @head: pointer to the list
 * @index: position of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *temp = *head;
	unsigned int l = 0;

	if (*head == NULL || dlistint_temp < index + 1)
		return (-1);

	if  (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1)
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
