/**
 *    ___  ___ ________  ________ ___  _________ 
 *    |  \/  ||  ___|  \/  /  __ \|  \/  || ___ \
 *    | .  . || |__ | .  . | /  \/| .  . || |_/ /
 *    | |\/| ||  __|| |\/| | |    | |\/| ||  __/ 
 *    | |  | || |___| |  | | \__/\| |  | || |    
 *    \_|  |_/\____/\_|  |_/\____/\_|  |_/\_|  
 * Prototype : int ft_memcmp(const void *s1, const void *s2, size_t n);
 * Compare les premiers n octets de deux zones mémoire.
 *
 * @param s1 La première zone mémoire à comparer.
 * @param s2 La deuxième zone mémoire à comparer.
 * @param n Le nombre d'octets à comparer.
 *
 * @return Un entier négatif si la première zone mémoire est inférieure à la deuxième, 
 *         un entier positif si elle est supérieure, ou 0 si les deux zones mémoire sont égales.
 * 
 * Fonctionnement global :
 * La fonction `ft_memcmp` compare les premiers `n` octets de deux zones mémoire pointées par `s1` et `s2`.
 * Elle retourne la différence entre les premiers octets non égaux trouvés dans les deux zones mémoire.
 * Si toutes les comparaisons sont égales jusqu'à `n` octets, elle retourne 0.
 */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		tmp1++;
		tmp2++;
		n--;
	}
	return (0);
}