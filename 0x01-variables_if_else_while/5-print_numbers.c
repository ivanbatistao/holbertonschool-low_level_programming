#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	while (i < 10)
	{
		printf("%u", i);
		i++;
	}
	printf("\n");

	return (0);
}
