#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i != 9)
			putchar(',');
		if (i != 9)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
