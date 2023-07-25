#include "main.h"
/**
 * *_strcpy - copies string by s
 * @n: char type string
 * @s: char type string
 * Return: pointer to n
 */
char *_strcpy(char *n, char *s)
{
	int z = -1;

	do
	{
		z++;
		n[z] = s[z];
	}
	while (s[z] != '\0');
	return (n);
}
