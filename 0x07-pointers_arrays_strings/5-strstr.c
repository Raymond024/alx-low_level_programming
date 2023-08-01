#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: the string to be searched
 * @needle: substring to be located
 *
 * Return: if a substring is located a pointer to the substring beginning point
 * if sub string not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if  (needle[index + 1] == '\0')
					return (haystack);
				index++;
			}
			while (haystack[index] == needle[index]);
		}
	}
	return ('\0');
}
