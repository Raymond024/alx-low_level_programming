#include "main.h"
/**
 * _strlen - program returns the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen(char *s)
{
	int lenga = 0;

	while (*s != '\0')
	{
		lenga++;
		s++;
	}
	return (lenga);
}
