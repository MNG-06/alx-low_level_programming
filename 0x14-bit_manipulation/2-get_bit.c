#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * get_bit - A function that returns the value of a bit.
  * @n: input long integer
  * @index: index to start at
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
