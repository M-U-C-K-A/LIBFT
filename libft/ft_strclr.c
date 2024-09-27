/**
 *     _____ ___________  _____  _     ______ 
 *    /  ___|_   _| ___ \/  __ \| |    | ___ \
 *    \ `--.  | | | |_/ /| /  \/| |    | |_/ /
 *     `--. \ | | |    / | |    | |    |    / 
 *    /\__/ / | | | |\ \ | \__/\| |____| |\ \ 
 *    \____/  \_/ \_| \_| \____/\_____/\_| \_|
 * Prototype : void ft_strclr(char *s);
 * 
 * @param s : Chaîne de caractères à effacer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strclr` remplit la chaîne de caractères `s` de caractères NULL (`\0`). Elle commence par déterminer
 * la longueur de la chaîne avec `ft_strlen`, puis remplace chaque caractère de la chaîne par `\0` en partant de la fin
 * vers le début. La boucle continue jusqu'à ce que tous les caractères de la chaîne soient remplacés par des NULL.
 * Si le pointeur `s` est NULL, la fonction ne fait rien. Cette fonction est utile pour effacer le contenu d'une chaîne
 * de caractères.
 */

#include "libft.h"

void    ft_strclr(char *s)
{
    int len;

    if (!s)
        return;
    len = ft_strlen(s);
    while (len >= 0)
        s[len--] = '\0';
}