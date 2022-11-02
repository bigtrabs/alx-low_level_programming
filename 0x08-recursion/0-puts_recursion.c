#include "main.h"
/**
 * _puts_recursion - outputs a string
 * @s: Intended string to be printed
 * Return: N/A
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
