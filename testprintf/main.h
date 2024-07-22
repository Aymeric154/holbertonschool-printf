#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>  /* Bibliothèque standard pour l'allocation de mémoire, etc. */
#include <stdarg.h>  /* Bibliothèque pour les arguments variables */
#include <stdio.h>   /* Bibliothèque standard d'entrée/sortie */
#include <unistd.h>  /* Bibliothèque pour les appels système de POSIX (comme write) */

/**
  * struct printer - instructions pour _printf
  * @spec: spécificateur pour identifier et imprimer
  * @func: liste de fonctions
  */
typedef struct printer {
    char *spec;                 /* Spécificateur de format, par exemple "c" pour un caractère */
    int (*func)(va_list);       /* Pointeur vers une fonction qui prend une liste d'arguments variables */
} printer_t;

/* Obtient la fonction appropriée pour un spécificateur de format donné */
int (*get_func(char conv_spec))(va_list);

/* Produit une sortie formatée selon un format spécifié */
int _printf(const char *format, ...);

/* Écrit un caractère à la sortie standard */
int _putchar(char c);

/* Imprime une chaîne de caractères */
int print_s(va_list arg);

/* Imprime un caractère */
int print_c(va_list arg);

/* Imprime un symbole de pourcentage */
int print_percent(va_list arg);

/* Convertit un entier en chaîne de caractères */
char *_itoa(int num, char *str);

/* Imprime un nombre */
int print_nums(va_list arg);

#endif

