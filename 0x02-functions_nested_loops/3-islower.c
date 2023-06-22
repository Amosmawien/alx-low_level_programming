#include  "main.h"

/**
 *  islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or o for anything else
 */

int _lower(int c)
{

	if (c >= 97 || c <= 122)
	{

	return (1);
	}
	return (0);
}	
