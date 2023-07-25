#include "main.h"
/**
 * _puts - function that prints a string
 * @c: prints _putchar character
 * @str: pointer to the string
 * Return: string and new line
 */
int _putchar(char c)

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
