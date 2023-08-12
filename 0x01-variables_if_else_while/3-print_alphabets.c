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
for (; num2 + 65 <= 90; )
{
putchar(num2 + 65);
num2++;
}
}          }
putchar('\n')
return (0);
}
