#include <main.h>
/**
  *main-entry point
  *
  *Return:always -0
  */
int main(void)
{
	int n;
	char p[] = "_putchar";

	for (n = 0; n <= 8; n++)
	{
	putchar(p[n]);
	}
	putchar('\n');
	return (0);
}
