#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bit to flip to get to a number
 * @n: first number to move
 * @m: second number to get to
 * Return: number of bits to needed change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int present;
	unsigned long int new = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = new >> x;
		if (present & 1)
			counter++;
	}
	return (counter);
}
