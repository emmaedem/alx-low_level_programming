#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])

{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}
