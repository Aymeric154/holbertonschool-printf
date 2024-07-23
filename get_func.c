#include "main.h"
#include <stdarg.h>
#include <stddef.h>
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
	int i = 0;

	printer_t funcs[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'\0', NULL}
	};

	while (funcs[i].spec != '\0')
	{
		if (funcs[i].spec == conv_spec)
		{
			return (funcs[i].func);
		}
		i++;
	}
	return (0);
}


