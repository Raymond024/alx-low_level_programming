#include "main.h"
#include <stdlib.h>
/**
 * argstostr - fuction concatenates program arguments
 * @ac: integer
 * @av: pointer to a pointer to array
 * Return: pointer to new string, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	len += ac;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		s[z] = av[x][y];
		z++;
	}
	if (s[z] == '\0')
	{
		s[z++] = '\n';
	}
	}
	return (s);
}
