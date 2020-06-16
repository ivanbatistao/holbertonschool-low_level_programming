#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 * using _putchar
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');

}
