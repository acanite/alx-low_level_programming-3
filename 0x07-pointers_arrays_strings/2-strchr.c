#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string
 * @c: Character to search
 * Return: Pointer to first instance of character
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	
	}

	return (0);
}
