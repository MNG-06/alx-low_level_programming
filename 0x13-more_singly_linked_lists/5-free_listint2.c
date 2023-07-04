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
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;

	}
}
