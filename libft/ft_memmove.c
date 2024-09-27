/**
 *    ___  ___ ________  ______  ________  _   _ _____          
 *    |  \/  ||  ___|  \/  ||  \/  |  _  || | | |  ___|         
 *    | .  . || |__ | .  . || .  . | | | || | | | |__           
 *    | |\/| ||  __|| |\/| || |\/| | | | || | | |  __|          
 *    | |  | || |___| |  | || |  | \ \_/ /\ \_/ / |___          
 *    \_|  |_/\____/\_|  |_/\_|  |_/\___/  \___/\____/ 
 * Prototype : void *ft_memmove(void *dst, const void *src, size_t len);
 * 
 * @param dst : Pointeur vers la zone de mémoire de destination où les données seront déplacées.
 * @param src : Pointeur vers la zone de mémoire source à déplacer.
 * @param len : Nombre d'octets à déplacer depuis la source vers la destination.
 * 
 * Variables utilisées :
 * - i : Indice utilisé pour parcourir les octets à déplacer.
 * - tmp1 : Pointeur vers la zone de mémoire de destination, converti en `unsigned char*`.
 * - tmp2 : Pointeur vers la zone de mémoire source, converti en `unsigned char*`.
 * 
 * Fonctionnement global :
 * La fonction `ft_memmove` déplace `len` octets de la zone de mémoire pointée par `src` vers la zone de mémoire
 * pointée par `dst`. Elle gère correctement les situations où les zones de mémoire se chevauchent. Si la zone
 * de destination se trouve après la zone source dans la mémoire (c'est-à-dire, si `dst` est situé au-delà de `src`),
 * elle effectue la copie en arrière pour éviter les écrasements de données. Sinon, elle effectue la copie en avant. 
 * La fonction retourne un pointeur vers la zone de mémoire de destination (`dst`). Cette fonction est utile pour
 * déplacer des blocs de mémoire de manière sûre.
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (tmp1 > tmp2)
		while (i < len)
		{
			tmp1[len - 1] = tmp2[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	return (dst);
}