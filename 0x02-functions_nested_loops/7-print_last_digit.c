#include "holberton.h"
/**
 * int print_last_digit(int) -  prints the last digit of a number
 * @a: variable
 *
 *
 * Return: Always (1) (Success)
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b >= 0)
	{
		_putchar(b + '0');
		return (1);
	}

	else
        {
                b = b * -1;
                _putchar(b + '0');
		return (1);

	}
}
