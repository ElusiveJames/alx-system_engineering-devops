#include <stdio.h>
/**
  * main - print single digit number base 10
  * Return: 0 success
  */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		++n;
	}
	for (n = 97; n <= 102; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
