#include "main.h"

/**
  * leet - Encoding a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i = 0, j = 0, k = 5;
	char m[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < l)
		{
			if (s[i] == m[j] || s[i] - 32 == m[j])
			{
				s[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
