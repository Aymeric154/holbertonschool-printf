#include "main.h"

/**
 * _printf - produit une sortie formatée selon un format spécifié
 * @format: chaîne de caractères contenant le format
 * 
 * Return: nombre de caractères imprimés
 */
int _printf(const char *format, ...) {
    int i = 0, len = 0;
    va_list arg;
    int (*func)(va_list);

    if (format == NULL)
        return (-1);

    va_start(arg, format);

    while (format && format[i]) {
        if (format[i] == '%') {
            i++;
            if (format[i] == '\0')
                return (-1);

            func = get_func(format[i]);
            if (func) {
                len += func(arg);
            } else {
                _putchar('%');
                _putchar(format[i]);
                len += 2;
            }
        } else {
            _putchar(format[i]);
            len++;
        }
        i++;
    }

    va_end(arg);
    return (len);
}
      
