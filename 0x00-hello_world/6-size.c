#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
printf ("sizeof int : %zu byte(s)\n", sizeof(int));
printf ("sizeof long : %zu byte(s)\n", sizeof(long));
printf ("sizeof char : %zu byte(s)\n", sizeof(char));
printf ("sizeof float : %zu byte(s)\n", sizeof(float));
printf ("sizeof long int : %zu byte(s)\n", sizeof(long int));
printf ("sizeof long long int : %zu byte(s)\n", sizeof(long long int));
}
