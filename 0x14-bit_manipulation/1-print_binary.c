#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints out binary representation of a number
 * @n: the number to be printed out
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a, counter = 0;
	unsigned long int present;

	for (a = 63; a >= 0; a--)
	{
		present = n >> a;

		if (present & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
