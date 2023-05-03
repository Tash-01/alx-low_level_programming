#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
