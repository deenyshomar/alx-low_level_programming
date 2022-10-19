#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function that prints the last digit of a number.
 *@d: collect integer value
 *Return: value of last digit;
 */
int print_last_digit(int d)
{
	int last;

	last = d % 10;
	_putchar(_abs(last) + '0');
	return (_abs(last));
}
