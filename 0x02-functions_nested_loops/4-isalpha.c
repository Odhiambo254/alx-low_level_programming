#include "main.h"
/**
   * _isalpha - checks for alphabetic character
    * @c: store the character
     *
      * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise.
       */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
