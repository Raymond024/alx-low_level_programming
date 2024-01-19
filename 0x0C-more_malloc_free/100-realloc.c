#include "main.h"
#include <stdlib.h>
/**
* _realloc - function relocates memory block using malloc and free
* @ptr: pointer to the memory allocated previously
* @old_size:is the size of allocted space in bytes
* @new_size: new size of memory block in bytes
* Return: pointer allocate to new size memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int index, num = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
		num = old_size;
	for (index = 0; index < num; index++)
		pointer[index] = oldptr[index];
	free(ptr);
	return (pointer);
}
