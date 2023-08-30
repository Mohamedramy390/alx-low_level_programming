#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
void _strlen_recursion(char *s)
{
    int i = 0;
    if (*s == '\0')
    {
        return (0);
    } else
    {
         i++;
        _strlen_recursion(s + i);
    }
    return (i);
}
