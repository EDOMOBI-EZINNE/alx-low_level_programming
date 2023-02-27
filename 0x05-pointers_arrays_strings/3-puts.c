#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a pointer to a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int c = 0;
	int i;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			break;
		}
		else
		{
			c++;
		}
	}

	for (i = 0; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
