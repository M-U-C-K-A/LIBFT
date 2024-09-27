/**
 *     _____ _____ _     _____  _    _ ___________      
 *    |_   _|  _  | |   |  _  || |  | |  ___| ___ \     
 *      | | | | | | |   | | | || |  | | |__ | |_/ /     
 *      | | | | | | |   | | | || |/\| |  __||    /      
 *      | | \ \_/ / |___\ \_/ /\  /\  / |___| |\ \      
 *      \_/  \___/\_____/\___/  \/  \/\____/\_| \_| 
 * Prototype : int ft_tolower(int c);
 * 
 * @param c : Le caractère à convertir en minuscule.
 * 
 * Fonctionnement global :
 * La fonction `ft_tolower` convertit un caractère en minuscule si celui-ci est en majuscule. Elle utilise la fonction `ft_isupper` pour vérifier
 * si le caractère est une majuscule. Si c'est le cas, elle convertit le caractère en minuscule en ajoutant 32 à sa valeur ASCII (ce qui est la
 * différence entre les majuscules et les minuscules en ASCII). Si le caractère n'est pas une majuscule, il est retourné inchangé. La fonction
 * retourne le caractère converti ou le caractère d'origine s'il n'était pas en majuscule.
 */

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}