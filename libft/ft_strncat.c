/**
 *     _____ ___________ _   _ _____   ___ _____    
 *    /  ___|_   _| ___ \ \ | /  __ \ / _ \_   _|   
 *    \ `--.  | | | |_/ /  \| | /  \// /_\ \| |     
 *     `--. \ | | |    /| . ` | |    |  _  || |     
 *    /\__/ / | | | |\ \| |\  | \__/\| | | || |     
 *    \____/  \_/ \_| \_\_| \_/\____/\_| |_/\_/ 
 * Prototype : char *ft_strncat(char *s1, const char *s2, size_t n);
 * 
 * @param s1 : Chaîne de caractères à laquelle ajouter des caractères.
 * @param s2 : Chaîne de caractères à partir de laquelle copier les caractères.
 * @param n : Nombre maximum de caractères à copier de `s2` vers `s1`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strncat` concatène au plus `n` premiers caractères de la chaîne `s2` à la fin de la chaîne `s1`. Elle commence
 * par trouver la fin de `s1` et copie les caractères de `s2` vers `s1` jusqu'à ce que `n` caractères soient copiés ou que
 * `s2` soit entièrement copié. La fonction assure également que la chaîne résultante est correctement terminée par un caractère
 * NULL. Elle retourne le pointeur vers la chaîne `s1` modifiée. Cette fonction est utile pour concaténer une partie d'une chaîne
 * source à une chaîne de destination tout en limitant le nombre de caractères copiés.
 */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}