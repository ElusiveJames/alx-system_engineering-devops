/**
  * print_alphabet - function that print alphabet in lowercase
  */
#include "main.h"
void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar('\n');
}
