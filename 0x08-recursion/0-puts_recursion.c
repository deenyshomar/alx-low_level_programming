#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that puts with recursion
 *
 * Return: nothing(void)
 *
 * @s: the arguments that will assign to the string
 *
 */

void _puts_recursion(char *s)
{
	char s[] = "Puts with recursion";

	_puts_recursion(s);
	_puts(s);
}
