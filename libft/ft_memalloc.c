/**
 *    ___  ___ ________  ___  ___   _      _     _____ _____ 
 *    |  \/  ||  ___|  \/  | / _ \ | |    | |   |  _  /  __ \
 *    | .  . || |__ | .  . |/ /_\ \| |    | |   | | | | /  \/
 *    | |\/| ||  __|| |\/| ||  _  || |    | |   | | | | |    
 *    | |  | || |___| |  | || | | || |____| |___\ \_/ / \__/\
 *    \_|  |_/\____/\_|  |_/\_| |_/\_____/\_____/\___/ \____/
 * Prototype : void *ft_memalloc(size_t size);
 * 
 * @param size : Nombre d'octets à allouer.
 * 
 * Variables utilisées :
 * - ptr : Pointeur vers la mémoire allouée.
 * 
 * Fonctionnement global :
 * La fonction `ft_memalloc` alloue dynamiquement un bloc de mémoire de taille `size` octets. Si l'allocation
 * réussit, elle initialise ce bloc de mémoire à zéro en utilisant `ft_bzero` et retourne un pointeur vers
 * ce bloc. Si l'allocation échoue, elle retourne NULL. Cette fonction est utile pour obtenir de la mémoire
 * propre et initialisée pour les structures ou données qui doivent être mises à zéro.
 */

#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if(ptr)
    {
        ft_bzero(ptr, size);
        return (ptr);
    }
    else
        return (NULL);
}