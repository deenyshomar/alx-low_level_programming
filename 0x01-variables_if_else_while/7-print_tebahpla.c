#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Program: by deenyshomar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ds;

	for (ds = 'z'; ds >= 'a'; ds--)
	{
		putchar(ds);
	}
	putchar('\n');
	return (0);
}
