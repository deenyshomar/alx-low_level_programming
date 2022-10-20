#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, mul;

	a = 0;
	while (a <= 9)
	{
		for (b = 0; b < 10; b++)
		{
			mul = a * b;
			if (b == 0)
			{
				_putchar(mul + '0');
			}

			if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + 48);
				_putchar(mul % 10 + 48);
			}
			else if (mul < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar (mul + 48);
			}
		}
		_putchar('\n');
		a++;
	}
}
