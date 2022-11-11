#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int num1 = 5, num2 = 6, mul;

	mul = num1 * num2;

	printf("The result of the multiplication is %i.", mul);
	return (EXIT_SUCCESS);
}
