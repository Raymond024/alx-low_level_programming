#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns indexed value bit
 * @n: the number indexed
 * @index: index of  bit
 *
 * Return: value of the bit or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
