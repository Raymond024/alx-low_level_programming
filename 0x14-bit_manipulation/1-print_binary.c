#include "main.h"

/**
 * base_power - func calculates (base ^ power)
 * @b: base
 * @p: power
 * Return: value of base to power
 */
unsigned long int base_power(unsigned int b, unsigned int p)
{
	unsigned long int x;
	unsigned int y;

	x = 1;
	for (y = 1; y <= p; y++)
		x *= b;
	return (x);
}

/**
 * print_binary - prints binary representation of a number
 * @n: number to be print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char fl;

	fl = 0;
	div = base_power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (ch == div)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
