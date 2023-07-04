#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*free_listint - A function that frees a listint_t list.
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
