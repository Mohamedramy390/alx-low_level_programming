#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int square(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i < n)
{
square(n, i + 1);
}
else
{
return (-1);
}
}
