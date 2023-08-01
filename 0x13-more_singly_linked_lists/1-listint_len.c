#include <stdio.h>
#include "lists.h"

/**
  * listint_len - A function that returns the number of elements.
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
