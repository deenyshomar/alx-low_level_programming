#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - function that prints 10x the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char letter;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
