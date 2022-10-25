#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int digit, j = 1, m = 0;

	for (int i = strlen(string) - 1; i >= 0; i--)
	{
		digit = string[i];
		digit = digit - 48;
		m = m + (digit * j);
		j = j * 10;
	}
}
