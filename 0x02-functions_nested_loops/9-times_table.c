#include "main.h"

/**
 * times_table - table function
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, multiple;

	for (i = 0; i <= 10; i++)
	{
	multiple = i * 9;
	_putchar('0' + i);
	_putchar(' ');
	_putchar('x');
	_putchar(' ');
	_putchar('9');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar('0' + multiple / 10);
	_putchar('0' + multiple % 10);
	_putchar('\n');
	}
}
