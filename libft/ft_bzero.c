/**
 *    ______  ______ ___________ _____ 
 *    | ___ \ |__  /|  ___| ___ \  _  |
 *    | |_/ /   / / | |__ | |_/ / | | |
 *    | ___ \  / /  |  __||    /| | | |
 *    | |_/ /./ /___| |___| |\ \\ \_/ /
 *    \____/ \_____/\____/\_| \_|\___/ 
 * Prototype : void ft_bzero(void *s, size_t n);
 * 
 * @param s : Pointeur vers la zone de mémoire à remplir.
 * @param n : Nombre d'octets à mettre à zéro.
 * 
 * Variables utilisées :
 * - d : Pointeur temporaire utilisé pour accéder aux octets de la mémoire.
 * 
 * Fonctionnement global :
 * La fonction `ft_bzero` remplit les `n` premiers octets de la zone de mémoire pointée par `s`
 * avec des zéros (`\0`). Cela est utile pour initialiser ou nettoyer une zone de mémoire.
 */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *d;

    d = (unsigned char *)s;
    while (n > 0)
    {
        *d++ = '\0';
        n--;
    }
}
