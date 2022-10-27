#include "main.h"

/**
 * prints a string, followed by a new line
 * @n: string
 *
 * Return: new line
 */

void _puts(char *str);
{
	void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
