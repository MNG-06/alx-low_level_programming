#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data.
 *@head: head of the list
 *
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;

		cursor = cursor->next;

	}

	return (sum);
}
