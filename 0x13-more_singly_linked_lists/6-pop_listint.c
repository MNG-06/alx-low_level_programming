#include <stdio.io.h>
#include "lists.h"

/**
  * pop_listint - A function that deletes the head node.
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;
	
	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);
	
	*head = (*head)->next;
	return (content);
}
