/**
 *    ______ _   _ _____ _____  _   _   ___  __________________ 
 *    | ___ \ | | |_   _/  __ \| | | | / _ \ | ___ \  ___|  _  \
 *    | |_/ / | | | | | | /  \/| |_| |/ /_\ \| |_/ / |_  | | | |
 *    |  __/| | | | | | | |    |  _  ||  _  ||    /|  _| | | | |
 *    | |   | |_| | | | | \__/\| | | || | | || |\ \| |   | |/ / 
 *    \_|    \___/  \_/  \____/\_| |_/\_| |_/\_| \_\_|   |___/
 * Prototype : void ft_putchar_fd(char c, int fd);
 * 
 * @param c : Caractère à écrire.
 * @param fd : Descripteur de fichier vers lequel écrire le caractère.
 * 
 * Fonctionnement global :
 * La fonction `ft_putchar_fd` écrit le caractère `c` dans le fichier ou le flux désigné par le descripteur de
 * fichier `fd`. Elle utilise la fonction système `write` pour effectuer l'écriture, en écrivant un seul octet
 * (le caractère `c`) à la fois. Cette fonction est utile pour l'écriture directe dans des fichiers ou des flux
 * de sortie standard, comme la sortie standard (stdout) ou la sortie d'erreur (stderr).
 */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}