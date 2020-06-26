#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: pointer
 * Return: p - pointer to s
 *
 */

char *leet(char *s)
{
	int i;
	int j;
	char *p = s;

	char letters[] = "a,A,e,E,o,O,t,T,l,L";
	char num[] = "4,4,3,3,0,0,7,7,1,1";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
			}
			j++;
		}
	}
	return (p);
}
