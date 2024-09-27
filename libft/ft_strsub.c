/**
 *     _____ ___________  _____ _   _______             
 *    /  ___|_   _| ___ \/  ___| | | | ___ \            
 *    \ `--.  | | | |_/ /\ `--.| | | | |_/ /            
 *     `--. \ | | |    /  `--. \ | | | ___ \            
 *    /\__/ / | | | |\ \ /\__/ / |_| | |_/ /            
 *    \____/  \_/ \_| \_|\____/ \___/\____/ 
 * Prototype : char *ft_strsub(char const *s, unsigned int start, size_t len);
 * 
 * @param s : Chaîne de caractères source à partir de laquelle la sous-chaîne sera extraite.
 * @param start : Position de départ dans la chaîne `s` où commencer l'extraction.
 * @param len : Longueur de la sous-chaîne à extraire.
 * 
 * Variables utilisées :
 * - sub : Pointeur vers la nouvelle sous-chaîne allouée.
 * - i : Indice utilisé pour parcourir la sous-chaîne.
 * 
 * Fonctions utilisées :
 * - ft_memalloc() : Alloue de la mémoire initialisée à zéro pour la sous-chaîne.
 * 
 * Fonctionnement global :
 * La fonction `ft_strsub` crée une nouvelle sous-chaîne à partir de la chaîne `s`, en commençant
 * à la position `start` et en extrayant une longueur de `len`. La mémoire est allouée dynamiquement
 * pour stocker cette sous-chaîne, qui se termine par un caractère nul (`\0`). Si l'allocation échoue ou
 * si la chaîne source est NULL, la fonction retourne NULL.
 */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s || !(sub = (char *)ft_memalloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}