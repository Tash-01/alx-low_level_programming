#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of double linked list
 * @n: data to insert in new node
 * @head: double pointer to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t new;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	 return (new);
}
