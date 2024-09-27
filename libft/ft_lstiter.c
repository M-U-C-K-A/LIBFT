/** 
 *     _      _____ _____ _____ _____ ___________            
 *    | |    /  ___|_   _|_   _|_   _|  ___| ___ \           
 *    | |    \ `--.  | |   | |   | | | |__ | |_/ /           
 *    | |     `--. \ | |   | |   | | |  __||    /            
 *    | |____/\__/ / | |  _| |_  | | | |___| |\ \            
 *    \_____/\____/  \_/  \___/  \_/ \____/\_| \_|  
 * Prototype : void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
 * 
 * @param lst : Pointeur vers le premier élément de la liste chaînée à itérer.
 * @param f : Fonction à appliquer à chaque élément de la liste.
 * 
 * Fonctionnement global :
 * La fonction `ft_lstiter` itère sur chaque élément de la liste chaînée pointée par `lst`. 
 * Pour chaque élément de la liste, elle appelle la fonction `f` en lui passant l'élément courant comme argument.
 * L'itération continue jusqu'à ce que tous les éléments de la liste aient été traités.
 */

#include "libft.h"

void ft_lstiter(t_list *lst,void (*f)(t_list *elem))
{
    while (lst)
    {
        f(lst);
        lst = lst->next;
    }
}
