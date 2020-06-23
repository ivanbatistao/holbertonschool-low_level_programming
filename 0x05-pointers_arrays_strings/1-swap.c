#include "holberton.h"

/**
 * swap_int - akes a pointer to an int as parameter and updates its value
 * @a: pointer
 * @b: pointer
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
