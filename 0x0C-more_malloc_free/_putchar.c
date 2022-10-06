#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the chareter c in to stdout
 * @c: charater to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and erron is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
