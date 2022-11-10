#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argv: argument vector
 * @argc: argument count
 * Return: exit success
 */

int main(int argc, char *argv[])
{
	int num1 = 5, num2 = 6, mul;

	mul = num1 * num2;

	printf("The result of the multiplication is %i.", mul);
	return (EXIT_SUCCESS);
}
