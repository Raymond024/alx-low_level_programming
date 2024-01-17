#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program calculates the number of coins
* need to make change
* @argc: number of arguments passed
* @argv: array of arguments
* Return: 0 (Success), 1 (failed)
*/
int main(int argc, char *argv[])
{
	int n, x, res;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	res = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && n >= 0; x++)
	{
		while (n >= coin[x])
		{
			res++;
			n -= coin[x];
		}
	}
	printf("%d\n", res);
	return (0);
}
