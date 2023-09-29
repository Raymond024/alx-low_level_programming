#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks for endianess
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
