#include "main.h"
/**
  *_isuper -checks for uppercase characters
  *@c:c character to be checked
  *Return: 1 if true , o if false
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);/*uppercase character*/
	}
	else
	{
	return (0);/*not an uppercase*/
	}
}
