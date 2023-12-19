#include <stdio.h>
/**
  * main - print single digit number base 10
  * Return: 0 success
  */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		++n;
	}
	printf("\n");
	return (0);
}
