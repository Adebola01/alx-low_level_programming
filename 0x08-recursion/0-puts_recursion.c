#include "main.h"
/*
* File: 0-puts_recursion.c
* Auth: Suleiman Adebola Bilikis
*/

/* function declaration */
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
