#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @c: character _putchar
 * @s: the string reference pointer
 * Return: always 0
 */
int _putchar(char c);

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}

