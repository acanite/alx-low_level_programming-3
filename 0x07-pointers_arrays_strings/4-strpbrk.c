#include "main.h"

/**
 * _strpbrk - A  function that searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string where search bytes are located
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
