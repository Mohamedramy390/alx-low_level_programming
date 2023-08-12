#include <stdio.h>
/**
 * main - prints alphapets
 * Return: 0 (success)
 */
int main(void)
{
int num = 0;

while (num + 97 <= 122)
{
putchar(num + 97);
num++;
if (num + 97 == 123)
{
int num2 = 0;
putchar('\n');
for (; num2 + 65 <= 90; )
{
putchar(num2 + 65);
num2++;
}
}          }
return (0);
}
