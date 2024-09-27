/**
 *     _____ _________________  _____  _   _ ______     
 *    /  ___|_   _| ___ \ ___ \/  __ \| | | || ___ \    
 *    \ `--.  | | | |_/ / |_/ /| /  \/| |_| || |_/ /    
 *     `--. \ | | |    /|    / | |    |  _  ||    /     
 *    /\__/ / | | | |\ \| |\ \ | \__/\| | | || |\ \     
 *    \____/  \_/ \_| \_\_| \_| \____/\_| |_/\_| \_| 
 * Prototype : char *ft_strrchr(const char *s, int c);
 * 
 * @param s : La chaîne de caractères dans laquelle rechercher.
 * @param c : Le caractère à rechercher dans la chaîne `s`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strrchr` recherche la dernière occurrence du caractère `c` dans la chaîne `s`. Elle retourne un pointeur vers la
 * position du caractère trouvé, ou NULL si le caractère n'est pas présent dans la chaîne. La recherche commence à la fin de la chaîne
 * et continue jusqu'au début. Cette fonction est utile pour trouver la dernière occurrence d'un caractère spécifique dans une chaîne.
 */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i - 1] == (char)c)
            return ((char *)s + i);
        i++;
    }
    return (NULL);
}