#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks for endianess
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) & a;

	return (*b);
}
