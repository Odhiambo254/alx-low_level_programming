#include <stdio.h>
/**
  *main -entry point
  *
  *Return:always 0 success
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar(n);

	for (n = 'a'; n <= 'f'; n++)
	putchar(n);
	return (0);
}
