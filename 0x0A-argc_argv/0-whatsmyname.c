#include <stdio.h>
#include "main.h"

/**
 * main - prints the programs name
 * @argc: number of arguments
 * @argv: array of arguements
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
