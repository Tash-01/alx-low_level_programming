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
	dlistint_t *hd;
	dlistint_t *h;
	unsigned int l;

	h1 = *head

	if (*hd != NULL)
		while (hd->prev != NULL)
			hd = h-><prev;

	l = 0;

	while (h1 !=  NULL)
	{
		if (l == index)
		{
			if (l == 0)
			{
				*head = hd->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd->next = head->next;

			if (hd-> != NULL)
			hd->next->prev = h;
			}
		free(hd);
	return (1);
		}
	h = hd;
hd = hd->next;
l++;
	}
	return (-1);
}
