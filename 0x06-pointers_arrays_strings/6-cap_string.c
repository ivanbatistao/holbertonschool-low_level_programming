#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer
 * Return: s
 *
 */

char *cap_string(char *s)
{

	int j;

	for (j = 0; s[j]; j++)
	{
		if (((s[j] >= 'a') && (s[j] <= 'z'))
		    && ((s[j - 1] == ' ') || (s[j - 1] == '\n')
			|| (s[j - 1] == ',' || (s[j - 1] == ';')
			    || (s[j - 1] == '.') || (s[j - 1] == '!')
			    || (s[j - 1] == '?') || (s[j - 1] == '"')
			    || (s[j - 1] == '(') || (s[j - 1] == ')')
			    || (s[j - 1] == '{') || (s[j - 1] == '}')
			    || (s[j - 1] == '\t') || j == 0)))
		{
			s[j] = s[j] - 32;
		}

			else
			{
				s[j] = s[j];
			}
	}

return (s);

}
