#include <stdio.h>
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	print_alphabet("Prints the alphabet, in lowercase, followed by a new line.");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
