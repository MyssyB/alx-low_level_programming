#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - fress a listint_t list
 * @head: pointer to the first node in a listint_t.
 *
 * Return: 0 alyays. Success
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
