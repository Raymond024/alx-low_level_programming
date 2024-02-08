#include "main.h"

/**
 * flip_bits - function returns number of bits needed to
 * flip one number to another
 * @n: original number
 * @m: changed number
 * Return: number of bits needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		c = e >> x;
		if (c & 1)
			counter++;
	}
	return (counter);
}
