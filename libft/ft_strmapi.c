/**
 *     _____ ______________  ___  ___  ______ _____ 
 *    /  ___|_   _| ___ \  \/  | / _ \ | ___ \_   _|
 *    \ `--.  | | | |_/ / .  . |/ /_\ \| |_/ / | |  
 *     `--. \ | | |    /| |\/| ||  _  ||  __/  | |  
 *    /\__/ / | | | |\ \| |  | || | | || |    _| |_ 
 *    \____/  \_/ \_| \_\_|  |_/\_| |_/\_|    \___/ 
 * Prototype : char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
 * 
 * @param s : Chaîne de caractères sur laquelle appliquer la fonction.
 * @param f : Fonction à appliquer à chaque caractère de la chaîne, prenant l'index du caractère et le caractère lui-même.
 * 
 * Fonctionnement global :
 * La fonction `ft_strmapi` crée une nouvelle chaîne de caractères en appliquant la fonction `f` à chaque caractère de la
 * chaîne d'entrée `s`, tout en tenant compte de l'index du caractère dans la chaîne. Elle commence par dupliquer la chaîne
 * `s` dans une nouvelle mémoire allouée. Ensuite, elle parcourt cette nouvelle chaîne caractère par caractère, appliquant la
 * fonction `f` à chaque caractère avec son index pour produire la chaîne transformée. Si l'allocation de mémoire échoue, ou si
 * `s` ou `f` sont NULL, la fonction retourne NULL. Une fois la transformation effectuée, elle retourne la nouvelle chaîne
 * résultante. Cette fonction est utile pour appliquer une transformation qui dépend de la position des caractères dans la
 * chaîne de caractères.
 */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *map;
    unsigned int i;

    i = 0;
    map = ft_strdup(s);
    if (!map || !s || !f)
        return (NULL);
    while (map[i] != '\0')
    {
        map[i] = f(i, map[i]);
        i++;
    }
    return (map);
}