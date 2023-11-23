#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned integer.
 * @b: pointer to a string of the  binary number to be converted
 * Return: unsigned int decimal value of binary number, or 0 upon failure
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int res;

	res = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		res <<= 1;
		if (b[x] == '1')
			res += 1;
	}
	return (res);
}
