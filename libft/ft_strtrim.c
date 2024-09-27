/**
 *     _____ ___________ ___________ ________  ___      
 *    /  ___|_   _| ___ \_   _| ___ \_   _|  \/  |      
 *    \ `--.  | | | |_/ / | | | |_/ / | | | .  . |      
 *     `--. \ | | |    /  | | |    /  | | | |\/| |      
 *    /\__/ / | | | |\ \  | | | |\ \ _| |_| |  | |      
 *    \____/  \_/ \_| \_| \_/ \_| \_|\___/\_|  |_/ 
 * Prototype : char *ft_strtrim(char const *s);
 * 
 * @param s : Chaîne de caractères à partir de laquelle les espaces blancs en début et en fin seront supprimés.
 * 
 * Variables utilisées :
 * - trim : Pointeur temporaire sur la chaîne source pour le traitement.
 * - res : Pointeur vers la nouvelle chaîne allouée et nettoyée des espaces blancs.
 * - size : Taille finale de la chaîne une fois les espaces blancs enlevés.
 * 
 * Fonctions utilisées :
 * - rm_first_blanks() : Supprime les espaces blancs au début de la chaîne.
 * - calc_length() : Calcule la longueur de la chaîne sans les espaces blancs en fin.
 * - ft_strlen() : Calcule la longueur d'une chaîne.
 * - ft_strncpy() : Copie les `n` premiers caractères d'une chaîne source dans une autre.
 * - malloc() : Alloue de la mémoire pour stocker la nouvelle chaîne nettoyée.
 * 
 * Fonctionnement global :
 * La fonction `ft_strtrim` prend une chaîne de caractères et supprime les espaces blancs
 * (espaces, tabulations, et sauts de ligne) en début et en fin de la chaîne. La mémoire
 * pour la nouvelle chaîne nettoyée est allouée dynamiquement. Si la chaîne source est vide
 * ou si l'allocation échoue, la fonction retourne NULL.
 */

#include "libft.h"

static char		*rm_first_blanks(char *trim)
{
	int		i;
	char	*trim_copy;

	i = 0;
	while (trim[i] == ' ' || trim[i] == '\n' || trim[i] == '\t')
		i++;
	trim_copy = &trim[i];
	return (trim_copy);
}

static size_t	calc_length(char *trim)
{
	size_t		size;

	size = ft_strlen(trim);
	if (size == 0)
		return (size);
	while (trim[size] == ' ' || trim[size] == '\t' ||
	trim[size] == '\n' || trim[size] == '\0')
		size--;
	return (size + 1);
}

char			*ft_strtrim(char const *s)
{
	char		*trim;
	char		*res;
	size_t		size;

	if (!s)
		return (NULL);
	trim = (char *)s;
	size = 0;
	if (*trim != '\0')
	{
		trim = rm_first_blanks(trim);
		size = calc_length(trim);
	}
	res = (char *)malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	res = ft_strncpy(res, trim, size);
	res[size] = '\0';
	return (res);
}
