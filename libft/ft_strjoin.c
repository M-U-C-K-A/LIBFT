/**
 *     _____ ___________   ___  _____ _____ _   _   
 *    /  ___|_   _| ___ \ |_  ||  _  |_   _| \ | |  
 *    \ `--.  | | | |_/ /   | || | | | | | |  \| |  
 *     `--. \ | | |    /    | || | | | | | | . ` |  
 *    /\__/ / | | | |\ \/\__/ /\ \_/ /_| |_| |\  |  
 *    \____/  \_/ \_| \_\____/  \___/ \___/\_| \_/ 
 * Prototype : char *ft_strjoin(char const *s1, char const *s2);
 * 
 * @param s1 : Première chaîne de caractères à concaténer.
 * @param s2 : Deuxième chaîne de caractères à concaténer.
 * 
 * Variables utilisées :
 * - size : Taille totale des deux chaînes combinées.
 * - join : Pointeur vers la nouvelle chaîne allouée contenant la concaténation.
 * - i : Indice utilisé dans le parcours de la nouvelle chaîne.
 * 
 * Fonctions utilisées :
 * - ft_strlen() : Calcule la longueur d'une chaîne de caractères.
 * - ft_memalloc() : Alloue de la mémoire initialisée à zéro.
 * - fill_join() : Fonction récursive utilisée pour remplir la nouvelle chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_strjoin` prend deux chaînes en entrée (`s1` et `s2`), 
 * alloue la mémoire nécessaire pour une nouvelle chaîne qui contient leur concaténation,
 * puis appelle une fonction auxiliaire `fill_join` pour copier le contenu des chaînes
 * dans cette nouvelle mémoire. Elle retourne la nouvelle chaîne ou NULL si l'allocation échoue.
 */

#include "libft.h"

static char	*fill_join(char *dst, char const *s2, unsigned int i, char *tmp)
{
	size_t			len;
	unsigned int	j;

	len = ft_strlen(tmp);
	j = 0;
	while (j < len)
	{
		dst[i] = tmp[j];
		i++;
		j++;
	}
	if (tmp == s2)
		return (dst);
	return (fill_join(dst, s2, i, (char *)s2));
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size;
	char			*join;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = ft_memalloc(size + 1);
	if (!join)
		return (NULL);
	i = 0;
	fill_join(join, s2, i, (char *)s1);
	return (join);
}