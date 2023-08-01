#include <stdio.io.h>
#include "lists.h"

/**
  * pop_listint - A function that deletes the head node.
  * @head: head of the list
  * Return: contents of head
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
