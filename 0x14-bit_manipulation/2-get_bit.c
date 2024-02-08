#include"main.h"

/**
 * get_bit - function return a bit at given index
 * @n: number to be checked
 * @index: index
 * Return: value of the bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	ch = n & div;
	if (ch == div)
		return (1);
	return (0);
}
