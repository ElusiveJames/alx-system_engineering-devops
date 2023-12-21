/**
  * _islower - check for lowercase characters
  * @c: character to check
  * Return: 1 if lower alpha 0 otherwise
  */

#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
