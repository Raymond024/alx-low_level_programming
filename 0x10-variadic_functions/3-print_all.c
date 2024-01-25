#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints anything
* @format: lists the arguments thst can be passed
* Return: void
*/
void print_all(const char * const format, ...)
{
	int index = 0;
	char *string, *sept = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sept, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sept, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sept, string);
					break;
				default:
					index++;
					continue;
			}
			sept = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(list);
}
