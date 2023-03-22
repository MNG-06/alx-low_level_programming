#include "main.h"

/**
  * _abs - compute the absolute value of an integer.
  * @v: is the number that is to be computed.
  *
  * Return: Absolute value of number or 0.
  */
int _abs(int v)
{
	if (v < 0)
	{
		int abs_val;

		abs_val = v * -1;

		return (abs_val);
	}

	return (v);
}
