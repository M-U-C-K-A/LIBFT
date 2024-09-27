/**
 *    ______ _   _ _____ _____ _   _______ _     ____________ 
 *    | ___ \ | | |_   _|  ___| \ | |  _  \ |    |  ___|  _  \
 *    | |_/ / | | | | | | |__ |  \| | | | | |    | |_  | | | |
 *    |  __/| | | | | | |  __|| . ` | | | | |    |  _| | | | |
 *    | |   | |_| | | | | |___| |\  | |/ /| |____| |   | |/ / 
 *    \_|    \___/  \_/ \____/\_| \_/___/ \_____/\_|   |___/
 * Prototype : void ft_putendl_fd(char const *s, int fd);
 * 
 * @param s : Chaîne de caractères à écrire.
 * @param fd : Descripteur de fichier vers lequel écrire la chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_putendl_fd` écrit la chaîne de caractères `s` suivie d'un caractère de nouvelle ligne (`\n`) 
 * dans le fichier ou le flux désigné par le descripteur de fichier `fd`. Si la chaîne `s` est non NULL, elle est
 * écrite caractère par caractère en utilisant `ft_putchar_fd`, suivie d'un caractère de nouvelle ligne. Cette 
 * fonction est utile pour afficher des chaînes de caractères avec une nouvelle ligne à la fin dans des fichiers
 * ou des flux de sortie spécifiques.
 */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
    if (s)
    {
        while (*s)
        {
            ft_putchar_fd(*s, fd);
            s++;
        }
        ft_putchar_fd('\n', fd);
    }
}