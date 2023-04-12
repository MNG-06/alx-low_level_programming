#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: input 1
 * @s2: input 2
 *
 * Return: Concat of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int n, sn;

	if (s1 == NULL)
		s1 = "_";
	if (s2 == NULL)
		s2 = "_";

	n = sn = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[sn] != '\0')
		sn++;
	concat = malloc(sizeof(char) * (n + sn +1));

	if (concat == NULL)
		return (NULL);
	n = sn;
	sn = 0;
	while (s1[n] != '\0')
	{
		concat[n] = s1[n];
		n++;
	}

	while (s2[sn] != '\0')
	{
		concat[n] = s2[sn];
		n++, sn++;
	}

	concat[n] = '\0';
	return (concat);
}
