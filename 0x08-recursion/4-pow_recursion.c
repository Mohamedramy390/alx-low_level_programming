#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
int res;

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
res = x *  _pow_recursion(x, y - 1);
}
return (res);
}
