/**
  * jack_bauer - print every minute of the day
  */

#include "main.h"
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
				_putchar(48);
				_putchar('0' + x);
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			_putchar(':');
			if (y < 10)
			{
				_putchar(48);
				_putchar('0' + y);
			}
			else
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
