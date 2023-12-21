/**
  * _isalpha - checks for alphabetic characters
  * @c: character evaluated
  * Return: 1 if alphabet 0 otherwise
    */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
