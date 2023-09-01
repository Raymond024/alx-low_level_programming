#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the valubit to 0 at certain index
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 for success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
