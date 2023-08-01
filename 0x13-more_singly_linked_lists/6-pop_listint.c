#include <stdio.io.h>
#include "lists.h"

/**
  * pop_listint - A function that deletes the head node.
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	listint_t *copy_head = *head;
	int rtrn_val;

	if (copy_head)
	{
		rtrn_val = copy_head->n;
		*head = copy_head->next;
		free(copy_head);
	}
	else
		rtrn_val = 0;
	return (rtrn_val);
}
