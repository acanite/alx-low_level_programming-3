#include "main.h"

/**
 * *_strncat - two words
 * Description: check main
 * @dest: pointer to char param
 * @src: pointer to char param
 * @n: int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
