/** 
 *     _      _____ _____ ___ ____________                     
 *    | |    /  ___|_   _/ _ \|  _  \  _  \                    
 *    | |    \ `--.  | |/ /_\ \ | | | | | |                    
 *    | |     `--. \ | ||  _  | | | | | | |                    
 *    | |____/\__/ / | || | | | |/ /| |/ /                     
 *    \_____/\____/  \_/\_| |_/___/ |___/                      
 * Prototype : void ft_lstadd(t_list **alst, t_list *new);
 * 
 * @param alst : Pointeur vers un pointeur de la tête de la liste chaînée.
 * @param new : Pointeur vers le nouvel élément à ajouter à la liste.
 * 
 * Fonctionnement global :
 * La fonction `ft_lstadd` ajoute un nouvel élément `new` au début de la liste chaînée pointée par `alst`.
 * L'élément `new` devient le premier élément de la liste, et son pointeur `next` est mis à jour pour 
 * pointer vers l'ancien premier élément de la liste. La tête de la liste (`*alst`) est ensuite mise à jour 
 * pour pointer vers le nouvel élément.
 */

#include "libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}