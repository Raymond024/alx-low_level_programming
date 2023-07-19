#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char n;
	int u;

	while (u < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		u++;
	}
}
