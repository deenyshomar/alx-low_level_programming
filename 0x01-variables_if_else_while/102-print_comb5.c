#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, s, x, z;

	for (d = 48; d <= 57; d++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (z = 48; z <= 57; z++)
				{
				if (((x + z) > (d + s) &&  x >= d) || d < x)
				{
					putchar(d);
					putchar(s);
					putchar(' ');
					putchar(x);
					putchar(z);

					if (d + s + x + z == 227 && d == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
