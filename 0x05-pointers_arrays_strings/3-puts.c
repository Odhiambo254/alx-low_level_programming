#include "main.h"

/**
  *_puts - print a string followed by a new line to stdout
  *@str: the string to print
  *Return: always 0
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
