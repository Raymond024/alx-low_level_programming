#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if its alphabetic 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
