#include <stdio.h>
/**
 * main - prints
 * Return: 0 (success)
 */
int main(void)
{
int n = 0;

while (n + 48 <= 57)
{
putchar(n + 48);
if (n + 48 == 57)
{
break;
}
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
