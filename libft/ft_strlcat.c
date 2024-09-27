/**
 *     _____ ___________ _     _____   ___ _____    
 *    /  ___|_   _| ___ \ |   /  __ \ / _ \_   _|   
 *    \ `--.  | | | |_/ / |   | /  \// /_\ \| |     
 *     `--. \ | | |    /| |   | |    |  _  || |     
 *    /\__/ / | | | |\ \| |___| \__/\| | | || |     
 *    \____/  \_/ \_| \_\_____/\____/\_| |_/\_/
 * Prototype : size_t ft_strlcat(char *dst, const char *src, size_t size);
 * 
 * @param dst : Chaîne de destination où ajouter la chaîne source.
 * @param src : Chaîne source à ajouter à la chaîne de destination.
 * @param size : Taille totale de la mémoire allouée pour la chaîne de destination.
 * 
 * Fonctionnement global :
 * La fonction `ft_strlcat` concatène la chaîne `src` à la fin de la chaîne `dst`, mais elle ne dépasse pas la taille totale
 * spécifiée par `size`. Elle commence par trouver la longueur actuelle de `dst` et continue à copier les caractères de `src`
 * vers `dst` jusqu'à ce que l'espace disponible soit épuisé ou que la fin de `src` soit atteinte. Elle s'assure que `dst` est
 * correctement terminé par un caractère NULL si `size` est suffisant. La fonction retourne la longueur totale de la chaîne résultante
 * (la longueur initiale de `dst` plus la longueur de `src`), ce qui permet de vérifier si la chaîne a été tronquée. Si `size` est
 * insuffisante pour contenir la chaîne concaténée, la chaîne `dst` est tronquée, et la longueur totale attendue est renvoyée.
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len_dst);
}