#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a given bit to 0 at given index
 * @n: pointer to the number
 * @index: index of the bit to change
 * Return: 1 for success, -1 for failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
