#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar('\n');

	return (0);
}
