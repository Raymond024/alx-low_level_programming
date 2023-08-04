#include "main.h"
/**
 * _strbrk - entry point for program
 * @s: input value
 * @accept: input value
 * Return: always 0
 */
char *_strbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
