#include "main.h"

/**
  * _strlen - computes the length of a string
  *@s: function parameter
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		length++;
	}
	return (length);

}
