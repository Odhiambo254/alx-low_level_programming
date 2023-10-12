#include "main.h"

/**
   * print_alphabet_x10 - Print alphabets 10 times
    */

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
	}
}
