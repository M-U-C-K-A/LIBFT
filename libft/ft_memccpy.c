/**
 *    ___  ___ ________  ________  _____ ________   __       
 *    |  \/  ||  ___|  \/  /  __ \/  __ \| ___ \ \ / /       
 *    | .  . || |__ | .  . | /  \/| /  \/| |_/ /\ V /        
 *    | |\/| ||  __|| |\/| | |    | |    |  __/  \ /         
 *    | |  | || |___| |  | | \__/\| \__/\| |     | |         
 *    \_|  |_/\____/\_|  |_/\____/ \____/\_|     \_/ 
 * Prototype : void *ft_memccpy(void *dst, const void *src, int c, size_t n);
 * 
 * @param dst : Pointeur vers la zone de mémoire où les données seront copiées.
 * @param src : Pointeur vers la zone de mémoire source à copier.
 * @param c : Valeur du caractère à rechercher pendant la copie.
 * @param n : Nombre d'octets à copier depuis `src` vers `dst`.
 * 
 * Variables utilisées :
 * - i : Indice utilisé pour parcourir les octets à copier.
 * - sdst : Pointeur vers la zone de mémoire de destination, converti en `unsigned char*`.
 * - ssrc : Pointeur vers la zone de mémoire source, converti en `unsigned char*`.
 * 
 * Fonctionnement global :
 * La fonction `ft_memccpy` copie jusqu'à `n` octets de la mémoire pointée par `src` vers la mémoire pointée
 * par `dst`. La copie se poursuit jusqu'à ce que le caractère `c` soit trouvé dans la source ou que `n` octets
 * aient été copiés. Si le caractère `c` est trouvé, la fonction retourne un pointeur vers l'octet suivant celui
 * où le caractère `c` a été trouvé dans `dst`. Si `c` n'est pas trouvé dans les `n` octets, la fonction retourne
 * NULL. Cette fonction est utile pour copier des blocs de mémoire tout en cherchant un caractère spécifique.
 */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c,size_t n)
{
    unsigned int i;
    unsigned char *sdst;
    unsigned char *ssrc;

    i = 0;
    sdst = (unsigned char *)dst;
    ssrc = (unsigned char *)src;
    while (i < n)
    {
        sdst[i] = ssrc[i];
        if (ssrc[i] == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}