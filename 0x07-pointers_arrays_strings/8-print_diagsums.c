#include "holberton.h"

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix of int
 * @a: pointer
 * @size: variable
 *
 */

void print_diagsums(int *a, int size)
{
	int j;
	int add_1 = 0;
	int add_2 = 0;

	for (j = 0; j < (size * size); j += (size + 1))
	{
		add_1 += a[j];
	}

	for (j = (size - 1); j < ((size * size) - 1); j += (size - 1))
	{
		add_2 += a[j];
	}

	printf("%d, %d\n", add_1, add_2);

}
