/**
 *     _____ ___________ _      _____ _   _         
 *    /  ___|_   _| ___ \ |    |  ___| \ | |        
 *    \ `--.  | | | |_/ / |    | |__ |  \| |        
 *     `--. \ | | |    /| |    |  __|| . ` |        
 *    /\__/ / | | | |\ \| |____| |___| |\  |        
 *    \____/  \_/ \_| \_\_____/\____/\_| \_/ 
 * Prototype : int ft_strlen(const char *str);
 * 
 * @param str : Chaîne de caractères dont la longueur doit être calculée.
 * 
 * Fonctionnement global :
 * La fonction `ft_strlen` calcule et retourne la longueur de la chaîne de caractères `str`, en comptant le nombre de caractères
 * avant le caractère NULL (`\0`) de fin de chaîne. Elle utilise une boucle pour parcourir chaque caractère de la chaîne jusqu'à
 * ce qu'elle atteigne le caractère NULL. La longueur de la chaîne, c'est-à-dire le nombre de caractères avant le caractère NULL,
 * est ensuite retournée. Cette fonction est essentielle pour déterminer la taille des chaînes de caractères lors de la gestion de
 * la mémoire et de la manipulation des chaînes en C.
 */

#include "libft.h"

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}