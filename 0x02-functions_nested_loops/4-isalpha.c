#include "main.h"
/**
 * _isalpha - prints
 * @c: chracter to be checked
 * Return: 1 for lowercase / Return: 0 other
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
