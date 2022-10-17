#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: program that prints all possible combinations of single-digit
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
		if (ds != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
