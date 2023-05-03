#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if linked list is empty, or the head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int l;

	if (*head == NULL)
		return (0);
	{
	temp = *head;
	l++;
	l = *head->n;
	*head = *head->next;
	}
	free(temp);
	return (l);
}
