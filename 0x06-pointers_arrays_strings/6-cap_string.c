#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, k;
	
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (k = 0; k < 13; j++)
		{
			if (s[i] == spe[k])
				{
					if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					{
						s[i + 1] -= 32;
					}
				}
		}
	}

	return (s);
}
