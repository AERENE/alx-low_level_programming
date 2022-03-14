#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower_case;
for (lower_case = 48; lower_case <=57; lower_case++)
{
putchar(lower_case);
}
for (lower_case = 97; lower_case <=102; lower_case++)
{
putchar(lower_case);
}
putchar('\n');
return (0);
}
