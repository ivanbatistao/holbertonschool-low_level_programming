#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: variable
 *
 */

void reverse_array(int *a, int n)
{
	int aux1, aux2;
	char tmp;

	aux1 = 0;
	aux2 = 0;

	aux1 = n - 1;
	while (aux1 > aux2)
	{
		tmp = a[aux2];
		a[aux2] = a[aux1];
		a[aux1] = tmp;
		aux1--;
		aux2++;
	}
}
