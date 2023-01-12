#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
