#include "holberton.h"

/**
 * rev_string - prints a string, in reverse
 * @s: pointer
 *
 *
 */


void rev_string(char *s)
{
	int aux1, aux2;
	char var1;

	aux1 = 0;
	aux2 = 0;

	while (s[aux1] != '\0')
	{
		aux1++;
	}

	aux1 = aux1 - 1;
	while (aux1 > aux2)
	{
		var1 = s[aux2];
		s[aux2] = s[aux1];
		s[aux1] = var1;
		aux1--;
		aux2++;
	}

}
