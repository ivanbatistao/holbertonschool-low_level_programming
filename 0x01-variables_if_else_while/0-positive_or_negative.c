#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function main generates a random number
 * It prints if the random number is positive, zero o negative
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negativo\n", n);
	}
	return (0);

}
