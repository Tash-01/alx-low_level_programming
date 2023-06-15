#include "lists.h"

/**
 * print_dlistint - pribts a doible linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t s = 0;

	while (h)
	{
		s++;
		printf("%d/n", h->n);
		h = h->next;
	}

	return (s);
}
