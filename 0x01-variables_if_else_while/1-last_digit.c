#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main-Entry point
 * Return: returns 0 always when successfull
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	printf("Last digit of %d is ", n);

	if (ld > 5)
		printf("%d and is greater than 5\n", ld);
	else if (ld == 0)
		printf("%d and is 0\n", ld);
	else
		printf("%d and is less than 6 and not 0\n", ld);
	return (0);
}
