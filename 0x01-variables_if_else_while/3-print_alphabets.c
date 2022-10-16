#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints alphabet in lower, and then in uppercase
 *
 * Return: Always 0 (Success)
 *
 * Program by: deenyshomar
 *
 */
int main(void)
{
	int ds;

	for (ds = 'a'; ds <= 'z'; ds++)
	{
		putchar(ds);
	}
	for (ds = 'A'; ds <= 'Z'; ds++)
	{
		putchar(ds);
	}
	putchar('\n');
	return (0);
}
