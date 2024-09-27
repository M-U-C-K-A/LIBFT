/**
 *     _____ ___________ _____ _____ _   _             
 *    /  ___|_   _| ___ \  ___|  _  | | | |            
 *    \ `--.  | | | |_/ / |__ | | | | | | |            
 *     `--. \ | | |    /|  __|| | | | | | |            
 *    /\__/ / | | | |\ \| |___\ \/' / |_| |            
 *    \____/  \_/ \_| \_\____/ \_/\_\\___/ 
 * Prototype : int ft_strequ(char const *s1, char const *s2);
 * 
 * @param s1 : Première chaîne de caractères à comparer.
 * @param s2 : Deuxième chaîne de caractères à comparer.
 * 
 * Fonctionnement global :
 * La fonction `ft_strequ` compare les chaînes de caractères `s1` et `s2` pour vérifier si elles sont identiques. Elle
 * commence par vérifier si l'une des chaînes est NULL ; si c'est le cas, elle retourne 0 (les chaînes ne sont pas égales).
 * Ensuite, elle compare chaque caractère des deux chaînes jusqu'à ce qu'un caractère différent soit trouvé ou que
 * la fin des deux chaînes soit atteinte. Si tous les caractères sont identiques et que les deux chaînes ont la même
 * longueur, la fonction retourne 1 (les chaînes sont égales). Sinon, elle retourne 0 (les chaînes ne sont pas égales).
 * Cette fonction est utile pour vérifier l'égalité de deux chaînes de caractères.
 */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}