#include "main.h"
/*
* File: 0-puts_recursion.c
* Auth: Suleiman Adebola Bilikis
*/

/**
 * _puts_recursion - writes the character c to stdout
 * char *s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
if (*s)
{
    _putchar(*s);
    _puts_recursion(s + 1);
}
else
   _putchar('\n');
}
