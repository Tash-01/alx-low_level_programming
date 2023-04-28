#include "lists.h"
#include <stddef.h>

/**
 * list_len - returnd the number of elements in a linked list
 * @h: pointer to tue list_t list
 *
 * Return: number of noded
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
