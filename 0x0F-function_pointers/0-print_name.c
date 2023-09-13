#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - this ia a function that prints name using pointer to function
	 * @name: names of the string to add
	 * @f: represents pointer to function
	 * Return: nothing
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}

