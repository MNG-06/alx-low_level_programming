#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a list.
 * @h: Pointer to the list
 *
 * Return: The number of node in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
