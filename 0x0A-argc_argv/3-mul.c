#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an int
 * @str: string to be converted
 * Return: the int
 */
int _atoi(char *str)
{
	int x, y, z, leng, a, dig;

	x = 0;
	y = 0;
	z = 0;
	leng = 0;
	a = 0;
	dig = 0;
	while (str[leng] != '\0')
		leng++;
	while (x < leng && a == 0)
	{
		if (str[x] == '-')
			++y;
		if (str[x] >= '0' && str[x] <= '9')
		{
			dig = str[x] - '0';
			if (y % 2)
				dig = -dig;
			z = z * 10 + dig;
			a = 1;
			if (str[x + 1] < '0' || str[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}
	if (a == 0)
		return (0);
	return (z);
}
/**
 * main - program multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, numa, numb;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	numa = _atoi(argv[1]);
	numb = _atoi(argv[2]);
	res = numa * numb;
	printf("%d\n", res);
	return (0);
}
