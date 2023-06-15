#include "lists.h"

/**
 * print_dlistint - pribts a doible linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t cont  = 0;
	const dlistint_t *h;

	while (h)
	{
		printf("%d/n", h->n);
		h = h->next;
		cont++;
	}

	return (cont);
}
