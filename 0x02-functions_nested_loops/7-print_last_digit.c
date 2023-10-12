#include "main.h"
/**
   * print_last_digit - print the last digit of a number
    * @n: number
     *
      * Return: return the last digit
       */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
	last_digit = -1 * (n % 10);
	}
	else
	{
	last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
