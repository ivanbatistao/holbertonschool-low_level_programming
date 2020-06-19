#include "holberton.h"

/**
 * print_square - prints a square
 * @size: variable - int
 * Return: (0)
 *
 */

void print_square(int size)
{

	int a, b;

	do {
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}

		_putchar('\n');
		b++;
	} while (b < size);

}
