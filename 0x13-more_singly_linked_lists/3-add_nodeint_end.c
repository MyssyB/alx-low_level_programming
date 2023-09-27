#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node to the end of a listint_t list.
 * @n: new node to be added to the end of the list.
 * @head: pointer to the first element of the listint_t list.
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
