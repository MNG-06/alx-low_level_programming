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
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
