#include "main.h"
/**
 * swap_int - prints
 * @a: var
 * @b: var
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
