#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @v: the number to be greated
 * Return: the last digit of a number
 */
int print_last_digit(int v)
{
	int l;

	l = v % 10;
	if (l < 0)

	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
	_putchar(1 + 48);
	return (0);
	}

}
