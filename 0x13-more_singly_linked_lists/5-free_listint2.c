#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - fress a listint_t list.
 * @head: the pointer to the first node of a listint_t list.
 *
 * Return: 0. Always.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
