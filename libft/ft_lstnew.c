/**
 *     _      _____ _____ _   _  _____ _    _                
 *    | |    /  ___|_   _| \ | ||  ___| |  | |               
 *    | |    \ `--.  | | |  \| || |__ | |  | |               
 *    | |     `--. \ | | | . ` ||  __|| |/\| |               
 *    | |____/\__/ / | | | |\  || |___\  /\  /               
 *    \_____/\____/  \_/ \_| \_/\____/ \/  \/ 
 * Prototype : t_list *ft_lstnew(void const *content, size_t content_size);
 * 
 * @param content : Pointeur vers le contenu à copier dans le nouvel élément de la liste.
 * @param content_size : Taille du contenu à copier.
 * 
 * Variables utilisées :
 * - new : Pointeur vers le nouvel élément de la liste chaînée à créer.
 * 
 * Fonctionnement global :
 * La fonction `ft_lstnew` crée un nouvel élément de liste chaînée. Elle alloue de la mémoire pour le nouvel
 * élément et initialise ses champs `content` et `content_size`. Si `content` n'est pas NULL, elle alloue
 * également de la mémoire pour le contenu et copie les données fournies. Si `content` est NULL, le champ
 * `content` du nouvel élément est mis à NULL et `content_size` est défini à 0. Le champ `next` est initialisé
 * à NULL, et un pointeur vers le nouvel élément est retourné. Si l'allocation échoue à n'importe quel moment,
 * la fonction retourne NULL.
 */

#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(*new));
    if(new == NULL)
        return (NULL);
    else
    {
        if (content != NULL)
        {
            new->content = (void *)ft_memalloc(sizeof(void) * content_size +1);
            if (new->content == NULL)
                return (NULL);
            ft_memcpy(new->content, content, content_size);
            new->content_size = content_size;
        }
        else
        {
            new->content = NULL;
            new->content_size = 0;
        }
        new->next = NULL;
    }
    return (new);
}