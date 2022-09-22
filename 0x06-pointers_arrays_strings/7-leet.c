#include "main.h"

/**
 * leet - encode a string
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;
	int j;

	char *b = "4433007711";
	char *z = "aAeEoOtTlL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == z[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
