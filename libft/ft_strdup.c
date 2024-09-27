/**
 *     _____ _________________ _   _______             
 *    /  ___|_   _| ___ \  _  \ | | | ___ \            
 *    \ `--.  | | | |_/ / | | | | | | |_/ /            
 *     `--. \ | | |    /| | | | | | |  __/             
 *    /\__/ / | | | |\ \| |/ /| |_| | |                
 *    \____/  \_/ \_| \_|___/  \___/\_|  
 * Prototype : char *ft_strdup(const char *s1);
 * 
 * @param s1 : Chaîne de caractères à dupliquer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strdup` crée une nouvelle chaîne de caractères qui est une copie de `s1`. Elle alloue d'abord
 * de la mémoire pour la nouvelle chaîne, en utilisant `malloc` pour un espace suffisant pour contenir la chaîne
 * `s1` sans le caractère NULL final. Ensuite, elle utilise `ft_strcpy` pour copier la chaîne `s1` dans la mémoire
 * nouvellement allouée. Enfin, elle retourne un pointeur vers la nouvelle chaîne. Notez que `ft_strlen(s1)` ne compte
 * pas le caractère NULL, donc la taille allouée est suffisante pour contenir la chaîne originale sans le caractère de fin.
 * Si l'allocation échoue, la fonction retourne `NULL`. Cette fonction est utile pour créer une copie dynamique d'une
 * chaîne de caractères.
 */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *str;

    str = (char *)malloc(sizeof(char) * ft_strlen(s1));
    if (str == NULL)
        return NULL;
    else
        str = ft_strcpy(str, s1);
    return (str);
}