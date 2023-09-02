#include "main.h"
/**
 * _islower - prints
 * @c: chracter to be checked
 * Return: 1 for lowercase / Return: 0 other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
