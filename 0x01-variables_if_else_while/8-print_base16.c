#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0', n = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
