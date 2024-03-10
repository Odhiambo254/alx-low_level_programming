#include "main.h"

/**
  *print_rev - print the string in reverse order followed by a new line
  *@s: string to be printed
  *return: 0
  */

void print_rev(char *s)
{
	int i, n;


	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		_putchar('\n');
	}
}
