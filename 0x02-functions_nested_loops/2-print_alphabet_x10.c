#include "main.h"

/**
 * print_alphabet_X10 - Make alphabet X10 times
 * Return: void
 */
void print_alphabet_X10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
