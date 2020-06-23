#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: pointer
 *
 *
 */


void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		count--;
	}
	_putchar('\n');

}
