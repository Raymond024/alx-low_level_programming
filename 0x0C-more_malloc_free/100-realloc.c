#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - rellocated a memory block
 * @ptr: pointer to memory allocated previously
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size of memory block
 *
 * Return: ptr
 * if new_size == old_size, return pointer without changes
 * if malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0  && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
