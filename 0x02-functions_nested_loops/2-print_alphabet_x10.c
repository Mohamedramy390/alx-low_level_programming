#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
char c;
int n;

for (n = 1; n <= 10; n++)
{
for (c = 'a'; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
