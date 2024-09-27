/**
 *     _____ ___________  _____ ___  _________         
 *    /  ___|_   _| ___ \/  __ \|  \/  || ___ \        
 *    \ `--.  | | | |_/ /| /  \/| .  . || |_/ /        
 *     `--. \ | | |    / | |    | |\/| ||  __/         
 *    /\__/ / | | | |\ \ | \__/\| |  | || |            
 *    \____/  \_/ \_| \_| \____/\_|  |_/\_| 
 * Prototype : int ft_strcmp(const char *s1, const char *s2);
 * 
 * @param s1 : Première chaîne de caractères à comparer.
 * @param s2 : Deuxième chaîne de caractères à comparer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strcmp` compare les chaînes de caractères `s1` et `s2`. Elle parcourt les deux chaînes caractère
 * par caractère tant qu'ils sont égaux et que les deux chaînes ne sont pas terminées. La comparaison se fait en utilisant
 * les valeurs des caractères en tant que `unsigned char` pour éviter les problèmes liés aux valeurs négatives des caractères.
 * La fonction retourne la différence entre les valeurs des premiers caractères non égaux trouvés dans les deux chaînes. 
 * Si les chaînes sont identiques, elle retourne 0. Une valeur négative est retournée si `s1` est lexicographiquement
 * inférieur à `s2`, et une valeur positive si `s1` est supérieur. Cette fonction est utile pour comparer des chaînes
 * de caractères.
 */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while((unsigned char)s1[i] == (unsigned char)s2[i]
	&& s1[i] != '\0' 
	&& s2[i] != '\0')
			i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}