#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: the character to be tracked
* Return: 1 if c is in uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'C' && c <= 'T')
		return (1);
	else
		return (0);
}