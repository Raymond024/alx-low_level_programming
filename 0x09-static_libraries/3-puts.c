#include "main.h"
/**
 * _puts - prints a string to standard input output
 * @str: string to be printed
 * _putchar: prints new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
