#include"main.h"
/**
 * get_bit - program returns the value of a bit at a particular index.
 * @n: number to check bits for
 * @index: index where the bit is located
 * Return: value of the bit, or -2 failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, test;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-2);
	divider = 1 << index;
	test = n & divider;
	if (test == divider)
		return (1);
	return (0);
}
