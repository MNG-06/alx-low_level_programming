#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the string that is to reverse
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	 if (*s)
        {

                return;
        }
        else
                s++;
                _print_rev_recursion(s)
                _putchar(*s);
}
