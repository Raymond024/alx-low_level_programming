#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: byte size of individual elemnent
 * Return: pointer to allocated memory,
 * NULL if nmemb is 0, 0 if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(size * nmemb);
	if (memo == NULL)
		return (NULL);
	f = memo;
	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';
	return (memo);
}
