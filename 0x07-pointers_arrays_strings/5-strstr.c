#include "holberton.h"

/**
 * _strstr - function that gets the length of a prefix substring
 * @haystack: pointer
 * @needle: pointer
 * Return: needle
 *
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) haystack);
	}

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (NULL);
}
