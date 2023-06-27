#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Aways 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
