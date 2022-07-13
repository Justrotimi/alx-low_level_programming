#include "main.h"
/**
 * _puts - function thst print a string
 * @str: pointer that store value
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
