#include "main.h"
/*
 * _memcpy - copies @n bytes from memory area @src to @dest
 *
 * @n: function cpies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
