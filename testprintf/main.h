#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
  * struct printer - instructions pour _printf
  * @spec: spécificateur pour identifier et imprimer
  * @func: liste de fonctions
  */

typedef struct printer {
    char *spec;
    int (*func)(va_list);
} printer_t;

int (*get_func(char conv_spec))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list arg);
int print_c(va_list arg);
char *_itoa(int num, char *str);
int print_nums(va_list arg);

#endif

