#include <unistd.h>

/**
 * _putchar - writes the character cto stdout
 * @c: the chracter to print
 *
 * Return: on Success 1
 * on error, -1 is returned, and errno is set appropriately.
 */

Int _putchar(char c)
{
	return (write(1, &c, 1));

}
