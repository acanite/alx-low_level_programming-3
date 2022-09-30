#include "main.h"

/**
 * _memcpy- copies n bytes from one destination
 * to another
 * @dest: destination of bytes
 * @src: source of bytes
 * @n: number of bytes to copy
 * Return: pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
