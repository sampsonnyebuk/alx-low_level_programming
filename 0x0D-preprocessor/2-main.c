#include <stdio.h>
#include <stdlib.h>

/**
 * main - Gives the name of the executed file
 * @argv: argument vector
 * @argc: argument counts
 * Return: always 0 for success else 1
 */

int main(int argc, char **argv)
{
	printf("The executed filename is %s .\n", argv[0]);
	return (EXIT_SUCCESS);
}
