#include "main.h"

/**
 * _printf - produit une sortie formatée selon un format spécifié
 * @format: chaîne de caractères contenant le format
 * 
 * Return: nombre de caractères imprimés
 */
int _printf(const char *format, ...) {
    int i = 0, len = 0;         // Initialisation des variables d'index et de longueur
    va_list arg;                // Déclaration de la liste d'arguments variadiques
    int (*func)(va_list);       // Pointeur vers une fonction qui prend un va_list et retourne un int

    // Si format est NULL, retourner une erreur (-1)
    if (format == NULL)
        return (-1);

    // Initialisation de la liste d'arguments variadiques
    va_start(arg, format);

    // Boucle pour parcourir chaque caractère de la chaîne format
    while (format && format[i]) {
        // Si le caractère actuel est un '%', traiter comme un spécificateur de format
        if (format[i] == '%') {
            i++;  // Passer au caractère suivant après '%'
            // Si le caractère suivant est la fin de la chaîne, retourner une erreur (-1)
            if (format[i] == '\0')
                return (-1);

            // Récupérer le pointeur de fonction correspondant au spécificateur de format
            func = get_func(format[i]);
            if (func) {
                // Si une fonction valide est trouvée, appeler la fonction et ajouter le résultat à len
                len += func(arg);
            } else {
                // Si aucune fonction valide n'est trouvée, imprimer '%' et le spécificateur littéralement
                _putchar('%');
                _putchar(format[i]);
                len += 2;
            }
        } else {
            // Si le caractère actuel n'est pas un '%', imprimer le caractère directement
            _putchar(format[i]);
            len++;
        }
        i++;  // Passer au caractère suivant dans la boucle
    }

    // Nettoyage de la liste d'arguments variadiques
    va_end(arg);
    // Retourner le nombre total de caractères imprimés
    return (len);
}
