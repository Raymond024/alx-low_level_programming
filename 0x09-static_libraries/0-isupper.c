# include "main.h"
/**
 * _isupper - uppercase letters of alphabet
 * @c: char to check
 *
 * Return: 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
