/**
 *    ______ _   _ _____ _____ _______________________ 
 *    | ___ \ | | |_   _/  ___|_   _| ___ \  ___|  _  \
 *    | |_/ / | | | | | \ `--.  | | | |_/ / |_  | | | |
 *    |  __/| | | | | |  `--. \ | | |    /|  _| | | | |
 *    | |   | |_| | | | /\__/ / | | | |\ \| |   | |/ / 
 *    \_|    \___/  \_/ \____/  \_/ \_| \_\_|   |___/ 
 * Prototype : void ft_putstr_fd(char const *s, int fd);
 * 
 * @param s : Chaîne de caractères à écrire.
 * @param fd : Descripteur de fichier vers lequel écrire la chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_putstr_fd` écrit la chaîne de caractères `s` dans le fichier ou le flux désigné par le descripteur de
 * fichier `fd`. Si la chaîne `s` est non NULL, chaque caractère de la chaîne est écrit successivement en utilisant
 * `ft_putchar_fd`. Cette fonction est utile pour afficher des chaînes de caractères dans des fichiers ou des flux
 * de sortie spécifiques.
 */

#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
    if (s)
    {
        while (*s)
        {
            ft_putchar_fd(*s, fd);
            s++;
        }
    }
}