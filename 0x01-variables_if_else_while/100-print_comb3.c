#include <stdio.h>
/**
  * main - print double  digit number combination
  * Return: 0 success
  */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(44);
					putchar(32);

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
