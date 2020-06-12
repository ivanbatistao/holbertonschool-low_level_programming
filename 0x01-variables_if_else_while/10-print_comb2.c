#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99
 * using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int b;

	i = 0;
	while (i <= 99)
	{
		b = i / 10;
		putchar('0' + b);
		b = i % 10;
		putchar('0' + b);

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
		return (0);

}
