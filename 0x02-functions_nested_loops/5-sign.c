#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints
 * @n: var
 * Return: 1 is positive 0 is zero -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}
