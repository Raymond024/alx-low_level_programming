#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function prints strings, followed by a new line
* @separator: The string to be printed
* @n: number of strings passed
* @...: alternative number of strings
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
