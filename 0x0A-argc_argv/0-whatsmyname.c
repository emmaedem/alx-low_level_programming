#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc_attribute_((unused)), char *argv[])
{
(void) argc;

printf("%s\n", *argv);

return (0);

}
