#include "holberton.h"
/**
 * times_table -  prints the last digit of a number
 *
 *
 *
 * Return: (0)
 */

void times_table(void)
{
	int c, l, a, b, e;

	c = 0;
	while (c <= 9)
	{
		l = 0;
		while (l <= 9)
		{
			a = c * l;
			b = a / 10;
			e = a % 10;

			if (l == 0)
				_putchar('0');


			else
			{
				if (b == 0)
					_putchar(' ');

				else
					_putchar(b + '0');
					_putchar(e + '0');
			}

			if (l < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			l++;
		}
		_putchar('\n');
		c++;

	}

}
