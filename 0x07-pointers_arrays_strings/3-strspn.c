#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: k
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int k = 0;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				k++;
			}

			j++;
		}
	}
	return (k);
}
