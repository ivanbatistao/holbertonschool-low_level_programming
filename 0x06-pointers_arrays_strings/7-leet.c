#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: pointer
 *
 *
 */

char *leet(char *s)
{
	char *ch;

	ch  = s;

	while (*s)
	{
		(*s == 'a' || *s == 'A') ? *s = '4' : 0;
		(*s == 'e' || *s == 'E') ? *s = '3' : 0;
		(*s == 'o' || *s == 'O') ? *s = '0' : 0;
		(*s == 't' || *s == 'T') ? *s = '7' : 0;
		(*s == 'l' || *s == 'L') ? *s = '1' : 0;

		s++;
	}

	return (ch);
}
