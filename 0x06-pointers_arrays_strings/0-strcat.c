#include "main.h"

/**
 * *_strcat - function comute strings
 *@dest: pointing to a char
 *@src: pointing to a char
 *Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = 0;
	return (dest);
}
