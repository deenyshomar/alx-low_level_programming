#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
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
	for (ds = 'a'; ds <= 'f'; ds++)
	{
		putchar(ds);
	}
	putchar('\n');
	return (0);
}
