#include "hash_tables.h"
/**
 * hash_djb2 - compute hash of 'str' using djb2
 * @str: string
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int y;

	h = 5381;
	while ((y = *str++))
	{
		h = ((h << 5) + h) + y;
	}
	return (h);
}
