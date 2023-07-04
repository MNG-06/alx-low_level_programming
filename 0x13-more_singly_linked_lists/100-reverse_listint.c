#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
  * reverse_listint - function that reverses the linked list.
  * @head: ...
  *
  * Return: A pointer.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
