/** 
 *      ___ _____ _____ _____ 
 *     / _ \_   _|  _  |_   _|
 *    / /_\ \| | | | | | | |  
 *    |  _  || | | | | | | |  
 *    | | | || | \ \_/ /_| |_ 
 *    \_| |_/\_/  \___/ \___/ 
 * Prototype : int ft_atoi(const char *str);
 * 
 * @param str : Chaîne de caractères représentant un nombre (en base 10) à convertir en entier.
 * 
 * Variables utilisées :
 * - result : Entier qui contiendra la valeur finale convertie.
 * - sign : Indicateur du signe du nombre (1 pour positif, -1 pour négatif).
 * - i : Indice utilisé pour parcourir la chaîne `str`.
 * 
 * Fonctionnement global :
 * La fonction `ft_atoi` convertit une chaîne de caractères représentant un nombre entier en base 10
 * en une valeur entière de type `int`. Elle commence par vérifier le signe du nombre, puis parcourt
 * les caractères numériques (`'0'` à `'9'`) pour construire la valeur entière. La fonction retourne
 * cette valeur multipliée par le signe détecté (positif ou négatif).
 */

#include "libft.h"

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
