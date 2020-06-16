#include "holberton.h"
/**
 * int print_last_digit -  prints the last digit of a number
 * @a: variable
 *
 *
 * Return: last digit of d
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a >= 0)
	{
		_putchar(b + '0');
		return (b);
	}

	else
        {
                b = b * -1;
                _putchar(b + '0');
		return (b);

	}
}
