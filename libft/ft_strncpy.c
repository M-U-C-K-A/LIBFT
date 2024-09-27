/**
 *     _____ ___________ _   _ _____ ________   __      
 *    /  ___|_   _| ___ \ \ | /  __ \| ___ \ \ / /      
 *    \ `--.  | | | |_/ /  \| | /  \/| |_/ /\ V /       
 *     `--. \ | | |    /| . ` | |    |  __/  \ /        
 *    /\__/ / | | | |\ \| |\  | \__/\| |     | |        
 *    \____/  \_/ \_| \_\_| \_/\____/\_|     \_/ 
 * Prototype : char *ft_strncpy(char *dst, const char *src, size_t len);
 * 
 * @param dst : Chaîne de caractères de destination où les données seront copiées.
 * @param src : Chaîne de caractères source à partir de laquelle les données seront copiées.
 * @param len : Nombre maximum de caractères à copier depuis `src` vers `dst`.
 * 
 * Fonctionnement global :
 * La fonction `ft_strncpy` copie jusqu'à `len` caractères de la chaîne `src` vers la chaîne `dst`. Si la longueur de `src` est inférieure
 * à `len`, les caractères restants de `dst` sont remplis avec des caractères NULL (`\0`). La fonction garantit que la chaîne de destination
 * est toujours terminée par un caractère NULL, même si `src` est plus courte que `len`. Cette fonction est utile pour copier des sous-chaînes
 * ou pour remplir des chaînes avec un nombre fixe de caractères.
 */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}