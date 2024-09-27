/**
 *     _____ ___________  _____   ___ _____   
 *    /  ___|_   _| ___ \/  __ \ / _ \_   _|  
 *    \ `--.  | | | |_/ /| /  \// /_\ \| |    
 *     `--. \ | | |    / | |    |  _  || |    
 *    /\__/ / | | | |\ \ | \__/\| | | || |    
 *    \____/  \_/ \_| \_| \____/\_| |_/\_/
 * Prototype : char *ft_strcat(char *s1, const char *s2);
 * 
 * @param s1 : Chaîne de caractères à laquelle `s2` sera concaténée. Cette chaîne doit avoir suffisamment de place
 *             pour contenir le résultat de la concaténation.
 * @param s2 : Chaîne de caractères à concaténer à `s1`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strcat` concatène la chaîne `s2` à la fin de la chaîne `s1`. Elle commence par trouver la fin de
 * `s1` en parcourant la chaîne jusqu'au caractère NULL (`\0`). Ensuite, elle copie chaque caractère de `s2` à la
 * suite de `s1`, puis ajoute un caractère NULL (`\0`) à la fin pour terminer la chaîne concaténée. La fonction
 * retourne un pointeur vers la chaîne résultante `s1`. Cette fonction est utile pour assembler deux chaînes de
 * caractères en une seule.
 */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}