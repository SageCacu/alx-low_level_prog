#include "main.h"

/**
 * times_table - table function
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, mult, prod;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (mult = 1 ; mult < 10 ; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * mult;
			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
