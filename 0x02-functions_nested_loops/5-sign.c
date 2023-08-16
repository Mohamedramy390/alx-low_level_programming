#include "main.h"
/**
 * print_sign - prints
 * @n: var
 * Return: 1 is positive 0 is zero -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}