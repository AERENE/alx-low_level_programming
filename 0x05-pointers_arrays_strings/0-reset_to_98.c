#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter
 *@*n: The pointer
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int a = 402;
int *n = &a;
*n = 98;

_putchar (a);

}
