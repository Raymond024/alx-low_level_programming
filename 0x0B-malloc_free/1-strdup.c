#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to new memory allocation
 * @str: string given as parameter
 * Return: 0 if success, NULL if otherwise
 */
char *_strdup(char *str)
{
	char *ary;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	ary = malloc(sizeof(char) * (x + 1));
	if (ary == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		ary[y] = str[y];
	return (ary);
}
