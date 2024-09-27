/**
 *     _____ _________________ _____ _                 
 *    /  ___|_   _| ___ \  _  \  ___| |                
 *    \ `--.  | | | |_/ / | | | |__ | |                
 *     `--. \ | | |    /| | | |  __|| |                
 *    /\__/ / | | | |\ \| |/ /| |___| |____            
 *    \____/  \_/ \_| \_|___/ \____/\_____/ 
 * Prototype : void ft_strdel(char **as);
 * 
 * @param as : Pointeur vers un pointeur de chaîne de caractères à libérer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strdel` libère la mémoire allouée pour la chaîne de caractères pointée par `*as` et met le pointeur
 * `*as` à NULL pour éviter les accès ultérieurs à une mémoire libérée. Elle vérifie d'abord que le pointeur `as` n'est
 * pas NULL. Ensuite, elle libère la mémoire pointée par `*as` en utilisant `free` et met `*as` à NULL pour indiquer que
 * la mémoire a été libérée et éviter les erreurs de segmentation. Cette fonction est utile pour gérer la mémoire et éviter
 * les fuites de mémoire lors de la manipulation de chaînes de caractères dynamiques.
 */

#include "libft.h"

void ft_strdel(char **as)
{
    if (as)
    {
        free(*as);
        *as = NULL;
    }
}