/**
  * print_alphabet_x10 - function that print alphabet in lowercase 10 times
  */
#include "main.h"
void print_alphabet_x10(void)
{
	char c;
	int times = 0;

	while (times <= 10)
	{
	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar('\n');
	times++;
	}

}
