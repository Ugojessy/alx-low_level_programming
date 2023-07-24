#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to the string
 *
 * Return: the converted string
 */
char *cap_string(char *str)
{
	int i, j, len;
	char prev;
	char sep[13] = " \t\n,;.!?\"(){}";

	len = strlen(str);
	prev = ' ';

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (prev != sep[j])
				continue;

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				break;
			}
		}

		prev = str[i];
	}

	return (str);
}
