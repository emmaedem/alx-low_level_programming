#iist_digit.cnclude "main.h"

/**
 * print_last_digit - prints the last digit
 * @c: the number
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int c;

	if (c < 0)
		c = -c;

	c = n % 10;

	if (c < 0)
		c = -c;

	_putchar(c + '0');

	return (c);
}
