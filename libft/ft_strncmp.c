/**
 *     _____ ___________ _   _ _____ ___  _________ 
 *    /  ___|_   _| ___ \ \ | /  __ \|  \/  || ___ \
 *    \ `--.  | | | |_/ /  \| | /  \/| .  . || |_/ /
 *     `--. \ | | |    /| . ` | |    | |\/| ||  __/ 
 *    /\__/ / | | | |\ \| |\  | \__/\| |  | || |    
 *    \____/  \_/ \_| \_\_| \_/\____/\_|  |_/\_|  
 * Prototype : int ft_strncmp(const char *s1, const char *s2, size_t n);
 * 
 * @param s1 : Première chaîne de caractères à comparer.
 * @param s2 : Deuxième chaîne de caractères à comparer.
 * @param n : Nombre maximum de caractères à comparer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strncmp` compare au plus `n` premiers caractères des chaînes `s1` et `s2`. La comparaison est effectuée caractère
 * par caractère, en tenant compte des différences de valeur ASCII entre les caractères des deux chaînes. Si une différence est
 * trouvée avant d'atteindre `n` caractères ou la fin d'une des chaînes, elle est retournée. Si les chaînes sont identiques jusqu'à
 * `n` caractères, la fonction retourne 0. Si `n` est égal à 0, la fonction retourne 0, indiquant que la comparaison n'a pas eu lieu. 
 * Cette fonction est utile pour comparer les chaînes de caractères de manière sécurisée en limitant le nombre de caractères à
 * comparer.
 */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2,size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
	&& s1[i] != '\0' 
    && s2[i] != '\0' 
    && i < (n - 1))
		i++;
	if (n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}