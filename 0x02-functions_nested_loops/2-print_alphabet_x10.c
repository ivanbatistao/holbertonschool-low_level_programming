#include "holberton.h"
/**
 * print_alphabetx10 - prints alphabet
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
		n ='a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		a++;
		_putchar('\n');
	}
}
