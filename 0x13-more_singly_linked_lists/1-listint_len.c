#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *listint_len - function that returns the no. of elements linked.
 *in a linked listint_t list
 *@h: A pointer to the head of the list
 *
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
