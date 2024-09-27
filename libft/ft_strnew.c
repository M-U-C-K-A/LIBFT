/**
 *     _____ ___________ _   _  _____ _    _            
 *    /  ___|_   _| ___ \ \ | ||  ___| |  | |           
 *    \ `--.  | | | |_/ /  \| || |__ | |  | |           
 *     `--. \ | | |    /| . ` ||  __|| |/\| |           
 *    /\__/ / | | | |\ \| |\  || |___\  /\  /           
 *    \____/  \_/ \_| \_\_| \_/\____/ \/  \/   
 * Prototype : char *ft_strnew(size_t size);
 * 
 * @param size : La taille de la chaîne de caractères à allouer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strnew` alloue de la mémoire pour une chaîne de caractères de taille `size` et initialise tous les caractères à
 * NULL (`\0`). Elle retourne un pointeur vers cette chaîne nouvellement allouée. Si l'allocation échoue, la fonction retourne NULL. 
 * Cette fonction est utile pour créer une chaîne de caractères vide avec une taille spécifiée, garantissant qu'elle est correctement
 * terminée par un caractère NULL.
 */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *str;
    size_t i;

    i = 0;
    if (!(str = (char *)malloc(sizeof(char) * size + 1)))
        return (NULL);
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
    str[i] = '\0';
    return (str);
}