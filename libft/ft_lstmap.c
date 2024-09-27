/** 
 *     _      _____ ________  ___  ___  ______               
 *    | |    /  ___|_   _|  \/  | / _ \ | ___ \              
 *    | |    \ `--.  | | | .  . |/ /_\ \| |_/ /              
 *    | |     `--. \ | | | |\/| ||  _  ||  __/               
 *    | |____/\__/ / | | | |  | || | | || |                  
 *    \_____/\____/  \_/ \_|  |_/\_| |_/\_| 
 * Prototype : t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
 * 
 * @param lst : Pointeur vers le premier élément de la liste chaînée d'origine.
 * @param f : Fonction à appliquer à chaque élément de la liste d'origine. Cette fonction retourne 
 *            un nouvel élément de liste.
 * 
 * Variables utilisées :
 * - tmp : Pointeur temporaire pour stocker les nouveaux éléments créés par la fonction `f`.
 * - lstnew : Pointeur vers le dernier élément de la nouvelle liste en construction.
 * - res : Pointeur vers le premier élément de la nouvelle liste, qui sera retourné.
 * 
 * Fonctionnement global :
 * La fonction `ft_lstmap` crée une nouvelle liste en appliquant la fonction `f` à chaque élément
 * de la liste chaînée d'origine `lst`. Pour chaque élément de la liste d'origine, `f` est appelée pour
 * générer un nouvel élément qui est ajouté à la nouvelle liste. La nouvelle liste est ensuite renvoyée.
 * Si la liste d'origine est vide, la fonction retourne NULL. La nouvelle liste est construite de manière
 * à préserver l'ordre des éléments.
 */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list *tmp;
    t_list *lstnew;
    t_list *res;

    lstnew = NULL;
    while (lst)
    {
        tmp = f(lst);
        if (!lstnew)
        {
            lstnew = tmp;
            res = lstnew;
            lstnew->next = NULL;
        }
        else
        {
            lstnew->next = tmp;
            tmp->next = NULL;
            lstnew = lstnew->next;
        }
        lst = lst->next;
    }
    return (res);
}