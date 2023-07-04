#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*free_listint2 - Function that frees a listint_t list.
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
