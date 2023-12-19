#include <stdio.h>
/**
  * main - print triple  digit number combination
  * Return: 0 success
  */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (c > b && b > a)
				{
				putchar(a);
				putchar(b);
				putchar(c);
					if (a < 55)
					{
						putchar(44);
						putchar(32);

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
