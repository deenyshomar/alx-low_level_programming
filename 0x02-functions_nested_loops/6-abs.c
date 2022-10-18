#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer.
 *@i: collect integer value
 *Return: absolute value of any integer.
 */
int _abs(int i)
{
	if (i < 0)
		return (i * (-1));
	else
		return (i * 1);
}
