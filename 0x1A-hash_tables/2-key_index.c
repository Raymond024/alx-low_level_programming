#include "hash_tables.h"

/**
 * key_index - function gets index for key
 * @key: key
 * @size: size of table
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
