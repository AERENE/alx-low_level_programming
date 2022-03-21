#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: first value
 * @b: second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int a_main = *a;
int b_main = *b;

*a = b_main;
*b = a_main;

}
