/**
  * print_last_digit - print last digit of a number
  * @n: number evaluated
  * Return: last digit value
  */
#include "main.h"
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -ld;
	_putchar ('0' + ld);
	return (ld);
}
