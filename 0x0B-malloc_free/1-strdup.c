#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * a function that returns a pointer to a newly allocated space in memory
 * *p: A pointer to return
 * str: A string with whic the pointer returns to
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
  int i = 0, j, k = 0;
  char *newStr = NULL;

  while (str[k] != '\0')
    {
      i++;
      k++;
    }

  newStr = malloc(sizeof(char) * (i + 1));

  if (str == NULL)
    return (NULL);

  for (j = 0; j <= i; j++)
    newStr[j] = str[j];

  return (newStr);
}
