#include "main.h"
/**
 * puts2 - prints characters for a string
 * @str: the string reference used
 * Return: 0
 */
int _putchar(char c);

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
