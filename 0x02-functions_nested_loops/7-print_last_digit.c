#include "main.h"

/**
  * print_last_digit - printing out the last digit of a number
  * @v: is the number that is to be treated
  *
  * Return: Value of the l digit of number
  */
int print_last_digit(int v)
{
	int l;

	l = v % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');

	return (l);
}

