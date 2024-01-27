#include <stdio.h>
#include <stdlib.h>
/**
* main - prog that perform simple tasks
* @argc: num of arguments passed
* @argv: array
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int byts, a;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]);
	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (a = 0; a < byts; a++)
	{
		if (a == byts - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}
		printf("%02hhx ", array[a]);
	}
	return (0);
}

