#include <stdio.h>
#include "main.h"

/**
  * _isalpha - checking the alphabetical character
  * @v: The character to be checked
  *
  * Return: 1 for alphabetical character or 0 for any other thing
  */
int _isalpha(int v)
{
	if ((v >= 65 && v <= 90) || (v >= 97 && v <= 122))
	{
		return (1);
	}

	return (0);
}
