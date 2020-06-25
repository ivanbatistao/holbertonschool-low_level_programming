#include "holberton.h"


/**
 * _strcmp - function that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: (s1 - s2)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0')
		{
			return (0);
		}

		j++;
	}

	return (s1[j] - s2[j]);

}
