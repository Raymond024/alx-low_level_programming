#include <stdlib.h>
#include "main.h"
/**
 * word_count - cunts the number of words in a string
 * @s: string
 * Return: number of words in string
 */
int word_count(char *s)
{
	int fl, ch, wrd;

	fl = 0;
	wrd = 0;
	for (ch = 0; s[ch] != '\0'; ch++)
	{
		if (s[ch] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			wrd++;
		}
	}
	return (wrd);
}

/**
 * **strtow - splits given string into words
 * @str: string
 * Return: pointer to an array of strings (Success), NULL if failed
 */
char **strtow(char *str)
{
	char **mat, *t;
	int x, y = 0, leng = 0, w, chr = 0, st, ed;

	while (*(str + leng))
		leng++;
	w = word_count(str);
	if (w == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (w + 1));
	if (mat == NULL)
		return (NULL);
	for (x = 0; x <= leng; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (chr)
			{
				ed = x;
				t = (char *) malloc(sizeof(char) * (chr + 1));
				if (t == NULL)
					return (NULL);
				while (st < ed)
					*t++ = str[st++];
				*t = '\0';
				mat[y] = t - chr;
				y++;
				chr = 0;
			}
		}
		else if (chr++ == 0)
			st = x;
	}
	mat[y] = NULL;
	return (mat);
}
