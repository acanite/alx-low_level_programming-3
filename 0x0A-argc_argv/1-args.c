#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints all the arguments separated by a new line
 *
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
