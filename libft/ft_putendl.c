/**
 *    ______ _   _ _____ _____ _   _______ _     
 *    | ___ \ | | |_   _|  ___| \ | |  _  \ |    
 *    | |_/ / | | | | | | |__ |  \| | | | | |    
 *    |  __/| | | | | | |  __|| . ` | | | | |    
 *    | |   | |_| | | | | |___| |\  | |/ /| |____
 *    \_|    \___/  \_/ \____/\_| \_/___/ \_____/
 * Prototype : void ft_putendl(char const *s);
 * 
 * @param s : Chaîne de caractères à écrire.
 * 
 * Fonctionnement global :
 * La fonction `ft_putendl` écrit la chaîne de caractères `s` suivie d'un caractère de nouvelle ligne (`\n`) 
 * sur la sortie standard (stdout). Si la chaîne `s` est non NULL, elle est écrite caractère par caractère en
 * utilisant la fonction `ft_putchar`, suivie d'un caractère de nouvelle ligne. Cette fonction est utile pour 
 * afficher des chaînes de caractères avec une nouvelle ligne à la fin sur la sortie standard.
 */

#include "libft.h"

void ft_putendl(char const *s)
{
    if (s)
    {
        while (*s)
        {
            ft_putchar(*s);
            s++;
        }
        ft_putchar('\n');
    }
}