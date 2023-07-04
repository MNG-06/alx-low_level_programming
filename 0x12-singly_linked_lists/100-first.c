#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - A function that prints,
 *   main function is executed.
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
