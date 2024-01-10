#include "main.h"
/**
 * _puts_recursion - function like puts();
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
