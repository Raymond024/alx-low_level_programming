#include "main.h"
/**
 * _puts_recursion - functions the same way as puts() function
 * @str: input
 * Return: Always 0
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}

	else
		_putchar('\n');
}
