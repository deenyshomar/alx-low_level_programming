#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Description: program that prints all possible different combinations of 3d
 *
 * Program: by deenyshomar
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int d, s, z;

	for (d = '0'; d <= '9'; d++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (d < s && s < z)
				{
					putchar(d);
					putchar(s);
					putchar(z);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
