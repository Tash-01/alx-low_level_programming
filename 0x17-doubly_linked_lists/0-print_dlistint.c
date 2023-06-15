#include "lists.h"

/**
 * print_dlistint - pribts a doible linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		print("%d/n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
