#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: character to be checked
 * Return: 1 for digit character or 0 for others
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
