#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print status of number
 * Return: 0 (success
 */)
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5")
	else if (n == 0)
		 printf("Last digit of n is %d and is 0")
	else
		 printf("Last digit of n is %d and is less than 6 and not 0")
	return (0);
}
