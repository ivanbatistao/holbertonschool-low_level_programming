#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: variable
 *
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (n > 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar(' ');
	}

}
