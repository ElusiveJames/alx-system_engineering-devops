#include <stdio.h>
/**
  * main - display alphabets
  * Return: 0 if success
  */

int  main(void)
{
char ch = 97;
char upchar = 65;

while (ch < 123)
{
	putchar(ch);
	++ch;
}
while (upchar <= 90)
{
	putchar(upchar);
	++upchar;
}
putchar('\n');
return (0);
}
