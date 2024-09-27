/**
 *     _____ ___________ _____ _____ ___________ _____ 
 *    /  ___|_   _| ___ \_   _|_   _|  ___| ___ \_   _|
 *    \ `--.  | | | |_/ / | |   | | | |__ | |_/ / | |  
 *     `--. \ | | |    /  | |   | | |  __||    /  | |  
 *    /\__/ / | | | |\ \ _| |_  | | | |___| |\ \ _| |_ 
 *    \____/  \_/ \_| \_|\___/  \_/ \____/\_| \_|\___/
 * Prototype : void ft_striteri(char *s, void (*f)(unsigned int, char *));
 * 
 * @param s : Chaîne de caractères sur laquelle appliquer la fonction.
 * @param f : Fonction à appliquer à chaque caractère de la chaîne avec son index.
 * 
 * Fonctionnement global :
 * La fonction `ft_striteri` itère sur chaque caractère de la chaîne `s` et applique la fonction `f` à chaque caractère,
 * en passant l'index du caractère et un pointeur vers le caractère à la fonction `f`. Elle commence par vérifier si
 * `s` ou `f` sont NULL ; si c'est le cas, elle retourne immédiatement sans effectuer d'opération. Ensuite, elle parcourt
 * la chaîne caractère par caractère jusqu'à ce que le caractère NULL (`\0`) soit atteint. Pour chaque caractère, elle
 * appelle `f`, en lui passant l'index actuel du caractère et un pointeur vers ce caractère. Cette fonction est utile pour
 * appliquer une opération spécifique à chaque caractère d'une chaîne, tout en tenant compte de la position du caractère
 * dans la chaîne.
 */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    if(!s || !f)
        return ;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}
