#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: (0)
 *
 */

void more_numbers(void)
{
	int n, l;

	n = 0;

	while (n < 10)
	{
		l = 0;
		while (l <= 14)
		{
			if (l >= 10)
			{
				_putchar(l / 10 + '0');
			}

			_putchar(l % 10 + '0');
			l++;
		}
		_putchar('\n');
		n++;
	}

}
