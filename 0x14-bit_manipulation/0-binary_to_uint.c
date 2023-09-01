#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string to the binary characters of 0 and 1
 *
 * Return: the number that converted or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
	}

	return (decimal);
}

