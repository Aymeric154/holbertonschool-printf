#include "main.h"

/**
 * *get_func - which takes a character as an argument
 * and returns a pointer to another function
 * which accepts an argument of type va_list
 *
 * @conv_spec: is argument of the function
 *
 * Return: 0
 */



int (*get_func(char conv_spec))(va_list)
{
	printer_t funcs[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i = 0;

	while (funcs[i].spec != NULL)
	{
		if (*(funcs[i].spec) == conv_spec)
		{
			return (funcs[i].func);
		}
		i++;
	}
	return (0);
}


