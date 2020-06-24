#include "holberton.h"

/**
 * rev_string - prints a string, in reverse
 * @s: pointer
 *
 *
 */


void puts2(char *str)
{

	while (*str != 0)
	{
		if ((*str % 2) == 0)
		{
			putchar(*str);
		}
		str++;
	}
	putchar('\n');
}
