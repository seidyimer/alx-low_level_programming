#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name's main
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
<<<<<<< HEAD
=======

>>>>>>> 24f03f1b406aa7e70c6594ca1fcad667f96b525a
