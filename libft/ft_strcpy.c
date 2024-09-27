/**
 *     _____ ___________  _____ ________   __          
 *    /  ___|_   _| ___ \/  __ \| ___ \ \ / /          
 *    \ `--.  | | | |_/ /| /  \/| |_/ /\ V /           
 *     `--. \ | | |    / | |    |  __/  \ /            
 *    /\__/ / | | | |\ \ | \__/\| |     | |            
 *    \____/  \_/ \_| \_| \____/\_|     \_/  
 * Prototype : char *ft_strcpy(char *dst, const char *src);
 * 
 * @param dst : Destination où copier la chaîne.
 * @param src : Chaîne source à copier.
 * 
 * Fonctionnement global :
 * La fonction `ft_strcpy` copie la chaîne de caractères `src` dans `dst`, y compris le caractère NULL (`\0`) qui marque
 * la fin de la chaîne. Elle commence par copier chaque caractère de `src` vers `dst` jusqu'à ce qu'elle atteigne le caractère
 * NULL dans `src`. Ensuite, elle ajoute un caractère NULL à la fin de `dst` pour terminer la chaîne copiée. La fonction
 * retourne un pointeur vers la chaîne `dst`. Cette fonction est utile pour dupliquer une chaîne de caractères dans un autre
 * emplacement mémoire.
 */

#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
    unsigned int i;
    i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}