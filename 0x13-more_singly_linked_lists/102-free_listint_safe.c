#include <stdio.h>
#include "lists.h"

/**
  * free_listint_safe - function that frees a listint_t.
  * @h:input head of linked list
  * Return: what does it return?
  */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	
	while (*h)
	{
		i++;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		check = copy;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				*h = NULL;
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}
