#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: fouble pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 *
 * Returns: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
{
	unsigned int p;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx -1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
