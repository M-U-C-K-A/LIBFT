/** 
 *     _____ _________________ _____ _   _ _____              
 *    |_   _/  ___| ___ \ ___ \_   _| \ | |_   _|             
 *      | | \ `--.| |_/ / |_/ / | | |  \| | | |               
 *      | |  `--. \  __/|    /  | | | . ` | | |               
 *     _| |_/\__/ / |   | |\ \ _| |_| |\  | | |               
 *     \___/\____/\_|   \_| \_|\___/\_| \_/ \_/               
 * Prototype : int ft_isprint(int c);
 * 
 * @param c : Caractère à vérifier pour déterminer s'il est un caractère imprimable.
 * 
 * Fonctionnement global :
 * La fonction `ft_isprint` vérifie si le caractère `c` est un caractère imprimable, c'est-à-dire
 * un caractère dont la valeur est comprise entre 32 (espace) et 126 (tilde '~') inclus. Elle retourne
 * 1 si `c` est dans cette plage, et 0 sinon.
 */

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}