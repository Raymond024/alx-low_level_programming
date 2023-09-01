#include "main.h"
#include <stdio.h>

/**
 * flip_bits - bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counter = 0;
	unsigned long int present;
	unsigned long int future = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		present = future >> a;
		if (present & 1)
			counter++;
	}

	return (counter);
}
