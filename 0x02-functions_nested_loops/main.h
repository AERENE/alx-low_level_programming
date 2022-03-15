#include <stdio.h>

#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');

	char ch;
        void print_alphabet(void);
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
                putchar('\n');
        }


	return (0);
}
