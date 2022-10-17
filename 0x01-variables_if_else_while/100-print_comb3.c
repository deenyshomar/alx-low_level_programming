#include <stdio.h>
#include <unistd.h>
/**
 * main - Entyr point
 *
 * Description: prints two digits combination
 *
 * Program: by deenyshomar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int d, s;

	for (d = '0'; d <= '9'; d++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (d < s)
			{
				putchar(d);
				putchar(s);

				if (d != '8' || (d == '8' && s != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
