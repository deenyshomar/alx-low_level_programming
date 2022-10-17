#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all single digit numbers of base 10
 *
 * Program: by deenyshomar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ds;

	for (ds = '0'; ds <= '9'; ds++)
	{
		putchar(ds);
	}
	putchar('\n');
	return (0);
}
