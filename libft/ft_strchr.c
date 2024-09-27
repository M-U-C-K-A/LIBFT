/**
 *     _____ ___________  _____  _   _ ______ 
 *    /  ___|_   _| ___ \/  __ \| | | || ___ \
 *    \ `--.  | | | |_/ /| /  \/| |_| || |_/ /
 *     `--. \ | | |    / | |    |  _  ||    / 
 *    /\__/ / | | | |\ \ | \__/\| | | || |\ \ 
 *    \____/  \_/ \_| \_| \____/\_| |_/\_| \_|
 * Prototype : char *ft_strchr(const char *s, int c);
 * 
 * @param s : Chaîne de caractères dans laquelle rechercher le caractère.
 * @param c : Caractère à rechercher, converti en `char`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strchr` recherche la première occurrence du caractère `c` dans la chaîne `s`. Elle parcourt la chaîne
 * caractère par caractère jusqu'à trouver une correspondance ou atteindre la fin de la chaîne. Si le caractère `c`
 * est trouvé, elle retourne un pointeur vers la première occurrence de ce caractère dans `s`. Si le caractère `c`
 * n'est pas trouvé et que la fin de la chaîne est atteinte, elle retourne `NULL`. Cette fonction est utile pour
 * localiser un caractère spécifique dans une chaîne de caractères.
 */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
            return ((char *)s + i);
        i++;
    }
    if(s[i] == (char)c)
        return((char *)s + i);
    return (NULL);
}