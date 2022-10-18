#include <stdio.h>
#include "main.h"

/**
  * _islower - function that checks for lowercase character.
  * @c: collect integer character
  *
  * Return: 1 for lowercase and 0 otherwise.
  */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
