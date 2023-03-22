#include "main.h"

/**
  * print_alphabet - creating the alphabets all in lower cases
  *
  * Return: void
  */
void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}

	_putchar('\n');
}
