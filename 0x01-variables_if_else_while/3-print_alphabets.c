#include <stdio.h>
/**
  *main - entry point of program
  *
  *Return:always 0
  */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	letter = 'A';

	while (letter <= 'A')
		putchar(letter);
		letter++;
		{
			putchar('\n');
			return (0);
		}
}
