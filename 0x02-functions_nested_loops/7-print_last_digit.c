include "main.h"

/**
  * print_last_digit - printing the last digit of a number
  * @v: is the number to be treated
  *
  * Return: Value of l digit of number
  */
int print_last_digit(int v)
{
	int l;

	if (v<0)
	v=-v

	l= v % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');

	return (l);
}
