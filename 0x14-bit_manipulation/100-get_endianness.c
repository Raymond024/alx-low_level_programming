#include "main.h"
/**
 * get_endianness - program checks the endianness
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
