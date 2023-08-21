#include "function_pointers.h"

/**
 * print_name - prints any name using a callback
 * @name: name to be printed
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
