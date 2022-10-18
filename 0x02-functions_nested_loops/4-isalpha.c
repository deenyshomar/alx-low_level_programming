#include <stdio.h>
#include "main.h"

/**
  * _isalpha - function that checks for  alphabetic character.
  * @c: collect integer character
  *
  * Return: 1 for alphabetic and 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
