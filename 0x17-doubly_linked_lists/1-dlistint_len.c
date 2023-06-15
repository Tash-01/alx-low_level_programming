#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in list
 * @h: pointer to rhe list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
