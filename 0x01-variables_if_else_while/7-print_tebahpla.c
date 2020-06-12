#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
