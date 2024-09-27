/** 
 *     _____ _____  ___   _     ______ _   _   ___  
 *    |_   _/  ___|/ _ \ | |    | ___ \ | | | / _ \ 
 *      | | \ `--./ /_\ \| |    | |_/ / |_| |/ /_\ \
 *      | |  `--. \  _  || |    |  __/|  _  ||  _  |
 *     _| |_/\__/ / | | || |____| |   | | | || | | |
 *     \___/\____/\_| |_/\_____/\_|   \_| |_/\_| |_/
 * Prototype : int ft_isalpha(int c);
 * 
 * @param c : Caractère à vérifier pour déterminer s'il est alphabétique.
 * 
 * Fonctionnement global :
 * La fonction `ft_isalpha` vérifie si le caractère `c` est une lettre alphabétique, 
 * qu'elle soit en majuscule ou en minuscule. Elle retourne 1 si le caractère est une lettre
 * alphabétique et 0 sinon. La vérification est effectuée en appelant les fonctions `ft_isupper` 
 * et `ft_islower`, qui déterminent respectivement si le caractère est une lettre majuscule ou 
 * minuscule.
 */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}