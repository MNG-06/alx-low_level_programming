#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*pop_listint - Function that deletes the head node of a listint_t.
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
