/**
 *     _____ ______________  ___  ___  ______       
 *    /  ___|_   _| ___ \  \/  | / _ \ | ___ \      
 *    \ `--.  | | | |_/ / .  . |/ /_\ \| |_/ /      
 *     `--. \ | | |    /| |\/| ||  _  ||  __/       
 *    /\__/ / | | | |\ \| |  | || | | || |          
 *    \____/  \_/ \_| \_\_|  |_/\_| |_/\_|    
 * Prototype : char *ft_strmap(char const *s, char (*f)(char));
 * 
 * @param s : Chaîne de caractères sur laquelle appliquer la fonction.
 * @param f : Fonction à appliquer à chaque caractère de la chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_strmap` crée une nouvelle chaîne de caractères en appliquant la fonction `f` à chaque caractère de la
 * chaîne d'entrée `s`. Elle commence par dupliquer la chaîne `s` dans une nouvelle mémoire allouée. Ensuite, elle parcourt
 * cette nouvelle chaîne caractère par caractère, appliquant la fonction `f` à chaque caractère pour produire la chaîne
 * transformée. Si l'allocation de mémoire échoue, ou si `s` ou `f` sont NULL, la fonction retourne NULL. Une fois la
 * transformation effectuée, elle retourne la nouvelle chaîne résultante. Cette fonction est utile pour appliquer une
 * transformation uniforme à tous les caractères d'une chaîne de caractères.
 */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *map;
    unsigned int i;

    i = 0;
    map = ft_strdup(s);
    if (!map || !s || !f)
        return (NULL);
    while (map[i] != '\0')
    {
        map[i] = f(map[i]);
        i++;
    }
    return (map);
}