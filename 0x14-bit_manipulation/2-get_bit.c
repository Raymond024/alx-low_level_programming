#include "main.h"
#include <stdio.h>
/**
 * get_bit -brings back value of bit at given index
 * @n: the number indexed
 * @index: index of the bit
 * Return: value of the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
