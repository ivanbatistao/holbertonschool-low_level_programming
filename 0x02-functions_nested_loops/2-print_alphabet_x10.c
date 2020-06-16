#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet x 10
 * using _putchar
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a, n;

	a = 0;
	while (a < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		a++;
		_putchar('\n');
	}
}
