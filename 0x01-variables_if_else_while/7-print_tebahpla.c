#include <stdio.h>
/**
  * main - display alphabets
  * Return: 0 if success
  */

int  main(void)
{
char ch = 122;

while (ch >= 97)
{
	putchar(ch);
	--ch;
}
putchar('\n');
return (0);
}
