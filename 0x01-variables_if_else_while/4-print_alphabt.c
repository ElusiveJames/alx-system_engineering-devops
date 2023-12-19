#include <stdio.h>
/**
  * main - display alphabets
  * Return: 0 if success
  */

int  main(void)
{
char ch = 97;

while (ch < 123)
{
	if (ch != 101 && ch != 113)
		putchar(ch);
	++ch;

}
putchar('\n');
return (0);
}
