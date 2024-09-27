/**
 * Nom de la fonction principale : ft_abs
 * Prototype : int ft_abs(int c);
 * 
 * @param c : L'entier dont on souhaite obtenir la valeur absolue.
 * 
 * Fonctionnement global :
 * La fonction `ft_abs` retourne la valeur absolue de l'entier passé en argument. Si l'entier est négatif, la fonction renvoie sa valeur positive équivalente.
 * Sinon, elle renvoie l'entier tel quel. Cette fonction est utile pour s'assurer que les valeurs traitées sont toujours positives.
 */

#include "libft.h"

int ft_abs(int c)
{
    if (c < 0)
        return -c;
    else
        return c;
}
