#include "main.h"
/**
 * _strlen ->> returns the length of a string
 * @s: parameter
 *
 * return : the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
