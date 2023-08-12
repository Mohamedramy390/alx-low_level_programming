#include <stdio.h>
/**
 * main - prints alphapet small
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num + 97 <= 122)
	{
		putchar(num + 97);
		num++;
	}
return (0);
}
