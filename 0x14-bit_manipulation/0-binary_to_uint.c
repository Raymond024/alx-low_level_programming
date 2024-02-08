#include "main.h"

/**
 * binary_to_uint - converts number from binary to unsignedint
 * @b: pointer to a binary to be converted
 * Return: unsigned int, or 0 if b is NULL or
 * no more chars in string
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
