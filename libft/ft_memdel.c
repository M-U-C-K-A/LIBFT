/**
 *    ___  ___ ________  ________ _____ _                    
 *    |  \/  ||  ___|  \/  |  _  \  ___| |                   
 *    | .  . || |__ | .  . | | | | |__ | |                   
 *    | |\/| ||  __|| |\/| | | | |  __|| |                   
 *    | |  | || |___| |  | | |/ /| |___| |____               
 *    \_|  |_/\____/\_|  |_/___/ \____/\_____/ 
 * Prototype : void ft_memdel(void **ap);
 * 
 * @param ap : Pointeur vers un pointeur de la mémoire à libérer.
 * 
 * Fonctionnement global :
 * La fonction `ft_memdel` libère la mémoire pointée par le pointeur `*ap` et met ce pointeur à NULL. 
 * Cela permet de prévenir les fuites de mémoire et d'éviter les références à la mémoire déjà libérée.
 * Si le pointeur `ap` est NULL, la fonction ne fait rien. Cette fonction est souvent utilisée pour
 * nettoyer des zones de mémoire allouées dynamiquement.
 */

#include "libft.h"

void ft_memdel(void **ap)
{
    if (ap)
    {
        free(*ap);
        *ap = NULL;
    }
}
