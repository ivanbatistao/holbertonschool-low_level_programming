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
		if (i <= '8')
		{
			putchar(i);
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');

	return (0);
}
