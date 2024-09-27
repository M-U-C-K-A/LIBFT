/** 
 *     _____ _____ _   _____________ ___________              
 *    |_   _/  ___| | | | ___ \ ___ \  ___| ___ \             
 *      | | \ `--.| | | | |_/ / |_/ / |__ | |_/ /             
 *      | |  `--. \ | | |  __/|  __/|  __||    /              
 *     _| |_/\__/ / |_| | |   | |   | |___| |\ \              
 *     \___/\____/ \___/\_|   \_|   \____/\_| \_| 
 * Prototype : int ft_isupper(int c);
 * 
 * @param c : Caractère à vérifier pour déterminer s'il est une lettre majuscule.
 * 
 * Fonctionnement global :
 * La fonction `ft_isupper` vérifie si le caractère `c` est une lettre majuscule de l'alphabet anglais.
 * Elle retourne 1 si le caractère est dans la plage des lettres majuscules (`'A'` à `'Z'`), et 0 sinon.
 */

#include "libft.h"

int		ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}