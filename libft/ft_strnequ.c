/**
 *     _____ ___________ _   _  _____ _____ _   _       
 *    /  ___|_   _| ___ \ \ | ||  ___|  _  | | | |      
 *    \ `--.  | | | |_/ /  \| || |__ | | | | | | |      
 *     `--. \ | | |    /| . ` ||  __|| | | | | | |      
 *    /\__/ / | | | |\ \| |\  || |___\ \/' / |_| |      
 *    \____/  \_/ \_| \_\_| \_/\____/ \_/\_\\___/  
 * Prototype : int ft_strnequ(char const *s1, char const *s2, size_t n);
 * 
 * @param s1 : Première chaîne de caractères à comparer.
 * @param s2 : Deuxième chaîne de caractères à comparer.
 * @param n : Nombre maximum de caractères à comparer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strnequ` compare les `n` premiers caractères des chaînes `s1` et `s2`. Si les caractères des deux chaînes sont identiques
 * jusqu'à `n` caractères ou jusqu'à la fin de l'une des chaînes, la fonction retourne 1 (vrai). Si une différence est trouvée avant d'atteindre
 * `n` caractères, la fonction retourne 0 (faux). Si l'une des chaînes est NULL, la fonction retourne 0. Cette fonction est utile pour vérifier
 * l'égalité des sous-chaînes ou pour des comparaisons de chaînes limitées à un nombre spécifique de caractères.
 */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2,size_t n)
{
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}