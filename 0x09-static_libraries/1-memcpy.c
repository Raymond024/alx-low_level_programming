#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: momory storage adress
 * @src: memory copy
 * @n: number of bytes
 *
 * Return: memory copied with byte chnged
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
