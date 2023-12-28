/**
  * print_last_digit - print last digit of a number
  * @n: number evaluated
  * Return: last digit value
  */
#include "main.h"
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	_putchar ('0' + ld);
	return (ld);
}
