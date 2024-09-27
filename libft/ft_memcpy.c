/**
 *    ___  ___ ________  ________ ________   __              
 *    |  \/  ||  ___|  \/  /  __ \| ___ \ \ / /              
 *    | .  . || |__ | .  . | /  \/| |_/ /\ V /               
 *    | |\/| ||  __|| |\/| | |    |  __/  \ /                
 *    | |  | || |___| |  | | \__/\| |     | |                
 *    \_|  |_/\____/\_|  |_/\____/\_|     \_/
 * Prototype : void *ft_memcpy(void *dst, const void *src, size_t n);
 * 
 * @param dst : Pointeur vers la zone de mémoire de destination où les données seront copiées.
 * @param src : Pointeur vers la zone de mémoire source à copier.
 * @param n : Nombre d'octets à copier depuis la source vers la destination.
 * 
 * Variables utilisées :
 * - tmp1 : Pointeur vers la zone de mémoire source, converti en `unsigned char*`.
 * - tmp2 : Pointeur vers la zone de mémoire de destination, converti en `unsigned char*`.
 * 
 * Fonctionnement global :
 * La fonction `ft_memcpy` copie `n` octets de la mémoire pointée par `src` vers la mémoire pointée par `dst`.
 * La copie se fait octet par octet. Une fois la copie terminée, la fonction retourne un pointeur vers la
 * zone de mémoire de destination (`dst`). Cette fonction est utilisée pour dupliquer des blocs de mémoire
 * de manière efficace.
 */

#include "libft.h"

void    *ft_memcpy(void *dst,const void *src,size_t n)
{
    unsigned char *tmp1;
    unsigned char *tmp2;

    tmp1 = (unsigned char *)src;
    tmp2 = (unsigned char *)dst;
    while (n > 0)
    {
        *tmp2++ = *tmp1++;
        n--;
    }
    return (dst);
}