#include "main.h"
/**
 * flip_bits - counts the number of bit to move from one number to the other
 * @n: number to move from
 * @m: number to get to
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int first;
	unsigned long int last = n ^ m;

	for (x = 63; x >= 0; x--)
	{
	       first = last >> x;
		if (first & 1)
			counter++;
	}
	return (counter);
}
