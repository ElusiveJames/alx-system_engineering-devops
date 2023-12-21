/**
  * print_sign - print the sign of a number
  * @n: number evaluated
  * Return: 1 if positive 0 if == 0 and -1 if -ve
  */
#include "main.h"
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
