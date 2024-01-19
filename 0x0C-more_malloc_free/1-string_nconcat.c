#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: max number of bytes
 * Return: newly allocated space in memory
 * or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int leng = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		leng++;
	conc = malloc(sizeof(char) * (leng + 1));
	if (conc == NULL)
		return (NULL);
	leng = 0;
	for (i = 0; s1[i]; i++)
		conc[leng++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		conc[leng++] = s2[i];
	conc[leng] = '\0';
	return (conc);
}
