/**
 *     _____ ___________ _____ _____ ___________       
 *    /  ___|_   _| ___ \_   _|_   _|  ___| ___ \      
 *    \ `--.  | | | |_/ / | |   | | | |__ | |_/ /      
 *     `--. \ | | |    /  | |   | | |  __||    /       
 *    /\__/ / | | | |\ \ _| |_  | | | |___| |\ \       
 *    \____/  \_/ \_| \_|\___/  \_/ \____/\_| \_|
 * Prototype : void ft_striter(char *s, void (*f)(char *));
 * 
 * @param s : Chaîne de caractères sur laquelle appliquer la fonction.
 * @param f : Fonction à appliquer à chaque caractère de la chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_striter` itère sur chaque caractère de la chaîne `s` et applique la fonction `f` à chacun d'eux.
 * Elle parcourt la chaîne caractère par caractère jusqu'à atteindre le caractère NULL (`\0`) marquant la fin de la
 * chaîne. Pour chaque caractère, elle passe un pointeur vers ce caractère à la fonction `f`, permettant ainsi à `f`
 * de modifier ou d'utiliser le caractère selon les besoins. Cette fonction est utile pour appliquer une opération
 * spécifique à chaque caractère d'une chaîne de caractères.
 */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
        f(&s[i]);
        i++;
    }
}