#include <stdio.h>
/**
 * main - prints
 * Return: 0 (success)
 */
int main(void)
{
int num = 0;

while (num + 97 <= 101)
{
putchar(num + 97);
num++;
if (num + 97 == 101)
{
break;
}
}
int x = 0;

while (x + 102 <= 113)
{
putchar(x + 102);
x++;
if (x + 102 == 113)
{
break;
}
}
int y = 0;

while (y + 114 <= 122)
{
putchar(y + 114);
y++;
}
return (0);
}
