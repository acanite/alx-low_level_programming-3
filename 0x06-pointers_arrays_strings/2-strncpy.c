#include "main.h"

/**
 * _strncpy - copy a string
 * @src: string
 * @dest: string
 * Return: edited string
 * @n: number of char to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; n > j; j++)
		dest[j] = '\0';
	return (dest);
}
