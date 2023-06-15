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
	const dlistint_t *node = h;

	while (node)
	{
		printf("%i/n", h->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
