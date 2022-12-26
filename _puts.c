#include "shell.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that is to be updated
 *
 *Return: void
 */
void _puts(char *str)
{
	int y;

	for (y = 0 ; str[y] != '\0' ; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
