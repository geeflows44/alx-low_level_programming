#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *_puts_recursion - prints a string
 *@s: pointer block of memory to fill
 *Return: void
 */
void _print_rev_recursion(char *s)

void _puts_recursion(char *s)

{
if (*s == '\0')
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}
