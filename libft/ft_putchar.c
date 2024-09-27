/**
 *    ______ _   _ _____ _____  _   _   ___  ______    
 *    | ___ \ | | |_   _/  __ \| | | | / _ \ | ___ \   
 *    | |_/ / | | | | | | /  \/| |_| |/ /_\ \| |_/ /   
 *    |  __/| | | | | | | |    |  _  ||  _  ||    /    
 *    | |   | |_| | | | | \__/\| | | || | | || |\ \    
 *    \_|    \___/  \_/  \____/\_| |_/\_| |_/\_| \_|
 * Prototype : void ft_putchar(char c);
 * 
 * @param c : Caractère à écrire.
 * 
 * Fonctionnement global :
 * La fonction `ft_putchar` écrit le caractère `c` sur la sortie standard (stdout), en utilisant le descripteur de
 * fichier `1` qui correspond à stdout. Elle utilise la fonction système `write` pour écrire un seul octet (le
 * caractère `c`) directement à la sortie standard. Cette fonction est souvent utilisée pour afficher des caractères
 * dans des programmes ou des utilitaires en ligne de commande.
 */

#include <libft.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}