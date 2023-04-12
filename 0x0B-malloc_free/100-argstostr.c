#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments
 * @ac: Integer input
 * @av: A pointer
 *
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int x, y, m = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n++;
	}
	n += ac;

	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[m] = av[x][y];
			m++;
		}
		if (str[m] == '\0')
		{
			str[m++] = '\n';
		}
	}
	return (str);
}
