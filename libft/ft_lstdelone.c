/** 
 *     _      _____ ___________ _____ _     _____ _   _  _____ 
 *    | |    /  ___|_   _|  _  \  ___| |   |  _  | \ | ||  ___|
 *    | |    \ `--.  | | | | | | |__ | |   | | | |  \| || |__  
 *    | |     `--. \ | | | | | |  __|| |   | | | | . ` ||  __| 
 *    | |____/\__/ / | | | |/ /| |___| |___\ \_/ / |\  || |___ 
 *    \_____/\____/  \_/ |___/ \____/\_____/\___/\_| \_/\____/ 
 * Prototype : void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
 * 
 * @param alst : Pointeur vers un pointeur du noeud à supprimer de la liste.
 * @param del : Fonction de suppression utilisée pour libérer le contenu du noeud.
 * 
 * Fonctionnement global :
 * La fonction `ft_lstdelone` supprime un seul élément de la liste chaînée pointée par `alst`. 
 * Elle appelle la fonction `del` pour libérer la mémoire allouée au contenu de l'élément (`content`),
 * puis libère la mémoire du noeud lui-même en utilisant `ft_memdel`. Après l'appel à `ft_memdel`, 
 * le pointeur `*alst` est mis à NULL pour éviter les références à la mémoire libérée.
 */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *,size_t))
{
    del((*alst)->content, (*alst)->content_size);
    ft_memdel((void **)alst);
}
