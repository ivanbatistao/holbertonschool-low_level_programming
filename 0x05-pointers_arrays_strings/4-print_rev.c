#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer
 *
 *
 */


void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	while (count > 0)
	{
		_putchar(*(s-1));
		--s;
		count--;
	}
	_putchar('\n');

}
