#include "main.h"
/**
 * set_bit - program sets the value of a bit to 1 at a given index.
 * @n: number to set index to
 * @index: index at which to set the bit
 * Return: 1 if success, or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int point;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	point = 1 << index;
	*n = *n | point;
	return (1);
}
