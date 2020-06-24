#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer
 *
 */

void puts_half(char *str)
{
	int aux1, count = 0, half;

	aux1 = 0;
	while (str[aux1] != 0)
	{
		count++;
		aux1++;
	}

	half = count / 2;
	if (count % 2 == 0)
	{
		aux1 = half;
		while (str[aux1] != 0)
		{
			_putchar(str[aux1]);
			aux1++;
		}
	}
	else
	{
		half  = (count - 1) / 2;
		aux1 = half;
		while (str[aux1] != 0)
		{
			_putchar(str[aux1]);
			aux1++;
		}
	}
	_putchar('\n');
}
