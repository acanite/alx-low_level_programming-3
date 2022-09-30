#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to by s
 * @s: target
 * @b: constant byte
 * @n: number of bytes
 * Return: value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
