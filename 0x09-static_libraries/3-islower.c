#include "main.h"

/**
 * _islower - checking the lowercase charecters
 *  @v: is the charecter to be checked
 *
 *  Return: 1 for lowercase characters or 0 for any other thing
 */
int _islower(int v)
{
	if (v >= 97 && v <= 122)
	{
		return (1);
	}

	return (0);
}
