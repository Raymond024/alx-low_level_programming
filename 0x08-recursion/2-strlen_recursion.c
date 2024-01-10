#include "main.h"
/**
 * _strlen_recursion - the string length
 * @str: The string to measure
 * Return: The string length
 */
int _strlen_recursion(char *str)
{
	int leng = 0;

	if (*str)
	{
		leng++;
		leng += _strlen_recursion(str + 1);
	}

	return (leng);
}
