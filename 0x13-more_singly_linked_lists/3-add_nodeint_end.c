#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list
 * @n: data to put into the new element
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *len;
	listint_t *temp = *head;

	len = malloc(sizeof(listint_t));
	if (!len)
		return (NULL);

	len->n = n;
	len->next = NULL;

	if (*head == NULL)
	{
		*head = len;
		return (len);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = len;

	return (len);
}
