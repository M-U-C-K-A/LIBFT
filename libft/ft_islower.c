/** 
 *     _____ _____ _     _____  _    _ ___________            
 *    |_   _/  ___| |   |  _  || |  | |  ___| ___ \           
 *      | | \ `--.| |   | | | || |  | | |__ | |_/ /           
 *      | |  `--. \ |   | | | || |/\| |  __||    /            
 *     _| |_/\__/ / |___\ \_/ /\  /\  / |___| |\ \            
 *     \___/\____/\_____/\___/  \/  \/\____/\_| \_|           
 * Prototype : int ft_islower(int c);
 * 
 * @param c : Caractère à vérifier pour déterminer s'il est une lettre minuscule.
 * 
 * Fonctionnement global :
 * La fonction `ft_islower` vérifie si le caractère `c` est une lettre minuscule de l'alphabet anglais.
 * Elle retourne 1 si le caractère est dans la plage des lettres minuscules (`'a'` à `'z'`), et 0 sinon.
 */

#include "libft.h"

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}