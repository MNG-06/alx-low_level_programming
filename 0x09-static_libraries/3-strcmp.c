#include <stdio.h>
#include "main.h"

/**
  * _strcmp - Comparing two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, lim;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		lim = i;
	}
	else
	{
		lim = j;
	}

	while (k <= lim)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (l);
}
