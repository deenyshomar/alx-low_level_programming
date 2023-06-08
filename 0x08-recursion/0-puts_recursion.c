#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: character pointer
 * Return: the string after iteration
 */

void _puts_recursion(char *s)
{
  if (*s != 0)
    {
      _putchar(*s);
    }
  else
    {
      _putchar('\n');
      return;
    }
  _puts_recursion(++s);
}
