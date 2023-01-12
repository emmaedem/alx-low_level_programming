#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]);
{
int i;
for (i = 0; i < argc; i++);

printf("%s\n", argv[i]);

return (0);
}
