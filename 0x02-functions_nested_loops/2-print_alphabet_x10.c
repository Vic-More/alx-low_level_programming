#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int circle = 0;
	char letter = 'a';

	while (circle < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		circle++;
	}
}
