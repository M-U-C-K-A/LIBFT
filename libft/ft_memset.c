/**
 *    ___  ___ ________  ___ _____ _____ _____                  
 *    |  \/  ||  ___|  \/  |/  ___|  ___|_   _|                 
 *    | .  . || |__ | .  . |\ `--.| |__   | |                   
 *    | |\/| ||  __|| |\/| | `--. \  __|  | |                   
 *    | |  | || |___| |  | |/\__/ / |___  | |                   
 *    \_|  |_/\____/\_|  |_/\____/\____/  \_/ 
 * Prototype : void *ft_memset(void *b, int c, size_t len);
 * 
 * @param b : Pointeur vers la zone de mémoire à remplir.
 * @param c : Valeur du caractère à utiliser pour remplir la mémoire. Elle est convertie en `unsigned char`.
 * @param len : Nombre d'octets à remplir avec la valeur `c`.
 * 
 * Variables utilisées :
 * - i : Indice utilisé pour parcourir les octets à remplir.
 * - d : Pointeur vers la zone de mémoire, converti en `unsigned char*`.
 * 
 * Fonctionnement global :
 * La fonction `ft_memset` remplit les `len` premiers octets de la zone de mémoire pointée par `b` avec la valeur
 * `c`. La valeur `c` est convertie en `unsigned char` pour être utilisée comme le byte à écrire dans chaque
 * octet de la mémoire. La fonction retourne un pointeur vers la zone de mémoire modifiée (`b`). Cette fonction
 * est utilisée pour initialiser ou réinitialiser une zone de mémoire avec une valeur spécifique.
 */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned int    i;
    unsigned char   *d;

    i = 0;
    d = (unsigned char *)b;
    while (i < len)
    {
        d[i++] = (unsigned char)c;
    }
    b = (void *)d;
    return (b);
}