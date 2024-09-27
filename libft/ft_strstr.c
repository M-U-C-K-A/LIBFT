/**
 *     _____ ___________  _____ ___________             
 *    /  ___|_   _| ___ \/  ___|_   _| ___ \            
 *    \ `--.  | | | |_/ /\ `--.  | | | |_/ /            
 *     `--. \ | | |    /  `--. \ | | |    /             
 *    /\__/ / | | | |\ \ /\__/ / | | | |\ \             
 *    \____/  \_/ \_| \_|\____/  \_/ \_| \_| 
 * Prototype : char *ft_strstr(char *str, char *to_find);
 * 
 * @param str : La chaîne de caractères dans laquelle rechercher.
 * @param to_find : La sous-chaîne à rechercher dans `str`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strstr` recherche la première occurrence de la sous-chaîne `to_find` dans la chaîne `str`. Si `to_find` est une chaîne vide,
 * la fonction retourne `str` car toute chaîne contient une chaîne vide au début. La recherche est effectuée en comparant chaque segment de
 * `str` avec `to_find`. La fonction retourne un pointeur vers le début de la première occurrence de `to_find` dans `str`, ou NULL si `to_find`
 * n'est pas trouvée.
 */

#include "libft.h"

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}
