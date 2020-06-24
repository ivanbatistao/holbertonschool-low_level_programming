#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer
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
