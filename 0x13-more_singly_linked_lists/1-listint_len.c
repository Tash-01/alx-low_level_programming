#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @h: pointer to length of the list
 *
 * Return: number of nodes in listint_len list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
