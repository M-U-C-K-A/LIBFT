/**
 *    ______ _   _ _____ _   _ ________________________ 
 *    | ___ \ | | |_   _| \ | || ___ \ ___ \  ___|  _  \
 *    | |_/ / | | | | | |  \| || |_/ / |_/ / |_  | | | |
 *    |  __/| | | | | | | . ` || ___ \    /|  _| | | | |
 *    | |   | |_| | | | | |\  || |_/ / |\ \| |   | |/ / 
 *    \_|    \___/  \_/ \_| \_/\____/\_| \_\_|   |___/ 
 * Prototype : void ft_putnbr_fd(int n, int fd);
 * 
 * @param n : Entier à écrire.
 * @param fd : Descripteur de fichier vers lequel écrire l'entier.
 * 
 * Fonctionnement global :
 * La fonction `ft_putnbr_fd` écrit l'entier `n` dans le fichier ou le flux désigné par le descripteur de fichier `fd`.
 * Si l'entier `n` est égal à `-2147483648` (la plus petite valeur possible pour un entier signé de 32 bits), la fonction
 * appelle récursivement `ft_putnbr_fd` pour gérer ce cas particulier, car il ne peut être converti directement en chaîne de
 * caractères. Pour les autres valeurs, si `n` est négatif, elle écrit un signe moins (`-`) et rend `n` positif. Ensuite, elle
 * effectue une conversion en chaîne de caractères en utilisant la récursion pour gérer les chiffres plus significatifs avant
 * les moins significatifs. Chaque chiffre est écrit individuellement en utilisant `ft_putchar_fd`. Cette fonction est utile
 * pour afficher des entiers avec une précision contrôlée dans des fichiers ou des flux de sortie spécifiques.
 */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putnbr_fd("-2147483648", fd);
    else
    {
        if (n < 0)
        {
            ft_putchar_fd('-', fd);
            n = -n;
        }
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd((n % 10) + '0', fd);
    }
}