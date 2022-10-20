#include <stdio.h>

/**
 * sum_multiple - function that prints the sum of all the multiples of 3 or 5
 * @num: accept the integer value
 * Return: returns summation
 */
int sum_multiple(int num)
{
	int n = 0, sum = 0;

	while (n < num)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	return (sum);
}

/**
 * main - Entry point to the program
 * Return: return 0 always
 */
int main(void)
{
	int a = 1024;

	printf("%d\n", sum_multiple(a));
	return (0);
}
