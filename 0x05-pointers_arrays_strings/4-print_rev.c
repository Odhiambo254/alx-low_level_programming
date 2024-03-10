#include "main.h"

/**
  *print_rev - print the string in reverse order followed by a new line
  *@s: string to be printed
  *return: 0
  */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar('\n');
	}
}
