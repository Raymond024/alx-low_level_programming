#include "main.h"
/**
 * base_pow - function calculates the base to a power
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of base to power
 */
unsigned long int base_pow(unsigned int base, unsigned int pow)
{
	unsigned long int res;
	unsigned int x;

	res = 1;
	for (x = 1; x <= pow; x++)
		res *= base;
	return (res);
}
/**
 * print_binary - prints a number in binary notation
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char print;

	print = 0;
	div = base_pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (ch == div)
		{
			print = 1;
			_putchar('1');
		}
		else if (print == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
