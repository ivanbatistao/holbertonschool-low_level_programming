#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: variavble
 * Return: (0)
 *
 */

void print_triangle(int size)
{

	int  spaces, lines, number_sign;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		lines = 1;
		while (lines <= size)
		{
			spaces = 1;
			while (spaces <= (size - lines))
			{
				_putchar(' ');
				spaces++;
			}

			number_sign = 1;
			while (number_sign <= lines)
			{
				_putchar('#');
				number_sign++;
			}

			lines++;
			_putchar('\n');

		}
	}

}
