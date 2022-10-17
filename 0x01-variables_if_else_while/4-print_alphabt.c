#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet excluding 'q' & 'e'
 *
 * Return: Always 0 (Success)
 *
 * Program by deenyhomar
 */
int main(void)
{
	char ds;

	for (ds = 'a'; ds <= 'z'; ds++)
	{
		if (ds == 'q' || ds == 'e')
		{
			continue;
		}
		putchar(ds);
	}
	putchar('\n');
	return (0);
}
