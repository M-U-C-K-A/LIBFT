/**
 *    ______ _   _ _____ _____ ___________             
 *    | ___ \ | | |_   _/  ___|_   _| ___ \            
 *    | |_/ / | | | | | \ `--.  | | | |_/ /            
 *    |  __/| | | | | |  `--. \ | | |    /             
 *    | |   | |_| | | | /\__/ / | | | |\ \             
 *    \_|    \___/  \_/ \____/  \_/ \_| \_| 
 * Prototype : void ft_putstr(char const *s);
 * 
 * @param s : Chaîne de caractères à afficher sur la sortie standard.
 * 
 * Fonctionnement global :
 * La fonction `ft_putstr` affiche la chaîne de caractères `s` sur la sortie standard (stdout). Elle parcourt chaque
 * caractère de la chaîne en utilisant un pointeur, et utilise `ft_putchar` pour écrire chaque caractère. La boucle
 * continue jusqu'à ce que le caractère NULL (`\0`) soit rencontré, ce qui marque la fin de la chaîne. Cette fonction
 * est utile pour afficher des chaînes de caractères directement sur la sortie standard.
 */

void    ft_putstr(char const *s)
{
    while(s)
        ft_putchar(*s++);
}