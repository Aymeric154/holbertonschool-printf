#include "main.h"

/**
 * get_func - sélectionne la fonction correcte pour effectuer l'opération
 * @conv_spec: caractère qui contient le spécificateur de conversion
 * 
 * Return: pointeur vers la fonction correspondant au spécificateur
 */
int (*get_func(char conv_spec))(va_list) {
    /* Tableau de structures associant spécificateurs de format et fonctions correspondantes */
    printer_t funcs[] = {
        {"c", print_c},           /* Spécificateur 'c' pour imprimer un caractère */
        {"s", print_s},           /* Spécificateur 's' pour imprimer une chaîne */
        {"%", print_percent},     /* Spécificateur '%' pour imprimer le symbole '%' */
        {NULL, NULL}              /* Marqueur de fin de tableau */
    };

    int i;

    /* Parcourir le tableau pour trouver la fonction correspondant au spécificateur */
    for (i = 0; funcs[i].spec != NULL; i++) {
        if (conv_spec == *(funcs[i].spec))
            return (funcs[i].func);  /* Retourne le pointeur vers la fonction trouvée */
    }
    return (NULL);  /* Retourne NULL si aucun spécificateur correspondant n'est trouvé */
}

