#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - print the kind of number
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{

        if (i > 0)
        {
                printf("%d is positive\n", i);
        } else if (i == 0)
        {
                printf("%d is zero\n", i);
        } else
        {
                printf("%d is negative\n", i);
        }
        return;
}
