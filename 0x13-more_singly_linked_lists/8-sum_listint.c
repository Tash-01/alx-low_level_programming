#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: first node in th3 l8nked list
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int len = 0;
	listint_t *empt = head;

	while (empt)
	{
		len += empt->n;
		empt = empt->next;
	}
	return (len);
}
