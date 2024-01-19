#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: bytes to be allocated by memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
	{
		exit(98);
	}
	return (memo);
}
