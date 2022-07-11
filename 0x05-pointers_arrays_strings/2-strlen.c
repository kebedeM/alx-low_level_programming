#include "main.h"
/**
 * _strlen ->> returns the length of a string
 * @s: parameter
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
