#include "holberton.h"

/**
 * rot13 - function that encodes a string into 1337
 * @s: pointer
 * Return: p - pointer to s
 *
 */

char *rot13(char *s)
{
	int i;
	int j;
	char *p = s;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHJKLMnopqrstuvwxyzabcdefghjklm";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
	}
	return (p);
}
