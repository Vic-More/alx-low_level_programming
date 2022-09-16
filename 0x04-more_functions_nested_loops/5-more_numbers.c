#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int line, n, repeat, max;

	n = '0';
	repeat = 0;
	max = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= max)
			{
				if (max == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			repeat++;
			max = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		max = '9';
	}
}
