/**
 *     _____ _____  ___   _____ _____ _____ _____ 
 *    |_   _/  ___|/ _ \ /  ___/  __ \_   _|_   _|
 *      | | \ `--./ /_\ \\ `--.| /  \/ | |   | |  
 *      | |  `--. \  _  | `--. \ |     | |   | |  
 *     _| |_/\__/ / | | |/\__/ / \__/\_| |_ _| |_ 
 *     \___/\____/\_| |_/\____/ \____/\___/ \___/
 * Prototype : int ft_isascii(int c);
 * 
 * @param c : Caractère à vérifier pour déterminer s'il est un caractère ASCII.
 * 
 * Fonctionnement global :
 * La fonction `ft_isascii` vérifie si le caractère `c` est un caractère ASCII, c'est-à-dire
 * si sa valeur se situe dans la plage de 0 à 127 inclus. Elle retourne 1 si `c` est dans cette
 * plage, et 0 sinon.
 */

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}