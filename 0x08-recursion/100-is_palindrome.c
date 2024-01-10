#include "main.h"
int checkpal(char *str, int itr, int leng);
int strlen_recursion(char *str);

/**
 * is_palindrome - checks if palidrome
 * @str: string
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (checkpal(str, 0, strlen_recursion(str)));
}

/**
 * strlen_recursion - returns the length of a string reecursively
 * @str: string
 * Return: length of the string
 */
int strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + strlen_recursion(str + 1));
}

/**
 * checkpal - checks if palidrome recursively
 * @str: string
 * @itr: iterator
 * @leng: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int checkpal(char *str, int itr, int leng)
{
	if (*(str + itr) != *(str + leng - 1))
		return (0);
	if (itr >= leng)
		return (1);
	return (checkpal(str, itr + 1, leng - 1));
}
