#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		l++;
		h = h->next;
	}
	return (l);
}
