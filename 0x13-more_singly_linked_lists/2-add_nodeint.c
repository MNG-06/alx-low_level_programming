#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - A function that adds a new node at the beginning.
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
