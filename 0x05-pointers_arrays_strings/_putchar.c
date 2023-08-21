#include <unistd.h>
/**
 * putchar - prints
 * @c: var
 * Return: 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
