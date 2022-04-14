#include <stdio.h>
/**
 * print_name - prints a name
 * @name: Pointer
 * @f: function that prints name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	{
		f(name);
	}
}
