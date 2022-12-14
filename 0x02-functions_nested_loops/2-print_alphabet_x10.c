#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 * @c: the character
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 'a' ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);

		_puncher('\n');
	}

}
