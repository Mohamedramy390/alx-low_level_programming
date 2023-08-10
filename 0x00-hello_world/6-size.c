#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
printf ("sizeof int : %zu\n byte(s)", sizeof(int));
printf ("sizeof long : %zu\n byte(s)", sizeof(long));
printf ("sizeof char : %zu\n byte(s)", sizeof(char));
printf ("sizeof float : %zu\n byte(s)", sizeof(float));
printf ("sizeof long int : %zu\n byte(s)", sizeof(long int));
printf ("sizeof long long int : %zu\n byte(s)", sizeof(long long int));
}
