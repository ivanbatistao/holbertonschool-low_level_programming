#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a', x = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
