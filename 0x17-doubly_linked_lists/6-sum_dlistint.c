#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in double linked list
 * @head: pointer to the list
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head);
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	
	return (sum);
}
