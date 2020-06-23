#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer
 *
 *
 */


void print_rev(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	while (count >= 0)
	{
		_putchar(*s);
		count--;
		s--;
	}
	_putchar('\n');

}
