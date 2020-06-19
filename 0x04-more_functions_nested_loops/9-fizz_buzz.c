#include "holberton.h"

/**
 * main - prints the numbers from 1 to 100
 * Fizz instead of the number and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: (0)
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n != 100)
		{
			if ((n % 3 == 0) && (n % 5 != 0))
			{
				printf("Fiz ");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (n % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("%d ", n);
			}
		}
		else
		{
			printf("Buzz");
		}
		n++;
	}
		printf("\n");
		return (0);
}
