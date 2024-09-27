/**
 *    ___  ___ ________  ________  _   _ ______              
 *    |  \/  ||  ___|  \/  /  __ \| | | || ___ \             
 *    | .  . || |__ | .  . | /  \/| |_| || |_/ /             
 *    | |\/| ||  __|| |\/| | |    |  _  ||    /              
 *    | |  | || |___| |  | | \__/\| | | || |\ \              
 *    \_|  |_/\____/\_|  |_/\____/\_| |_/\_| \_|  
 * Prototype : void *ft_memchr(const void *s, int c, size_t n);
 * @param s : Pointeur vers la zone de mémoire à rechercher.
 * @param c : Valeur du caractère à rechercher dans la mémoire.
 * @param n : Nombre d'octets à examiner dans la zone de mémoire.
 * 
 * Variables utilisées :
 * - p : Pointeur vers la zone de mémoire, converti en `unsigned char*`.
 * - i : Indice utilisé pour parcourir les octets dans la zone de mémoire.
 * 
 * Fonctionnement global :
 * La fonction `ft_memchr` recherche le premier occurrence du caractère `c` dans les `n` premiers octets
 * de la zone de mémoire pointée par `s`. Si le caractère `c` est trouvé, elle retourne un pointeur vers
 * l'emplacement de ce caractère dans la mémoire. Sinon, elle retourne NULL. La recherche est effectuée
 * de manière séquentielle à travers les octets de la zone spécifiée.
 */

#include "libft.h"

void *ft_memchr(const void *s,int c, size_t n)
{
    unsigned char *p;
    unsigned int i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if(p[i] == (unsigned char)c)
            return ((void *)p + i);
        i++;
    }
    return (NULL);
}