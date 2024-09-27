/**
 *     _____ _____ _   _____________ ___________        
 *    |_   _|  _  | | | | ___ \ ___ \  ___| ___ \       
 *      | | | | | | | | | |_/ / |_/ / |__ | |_/ /       
 *      | | | | | | | | |  __/|  __/|  __||    /        
 *      | | \ \_/ / |_| | |   | |   | |___| |\ \        
 *      \_/  \___/ \___/\_|   \_|   \____/\_| \_| 
 * Prototype : int ft_toupper(int c);
 * 
 * @param c : Le caractère à convertir en majuscule.
 * 
 * Fonctionnement global :
 * La fonction `ft_toupper` convertit un caractère en majuscule si celui-ci est en minuscule. Elle utilise la fonction `ft_isupper` pour vérifier
 * si le caractère est déjà une majuscule. Si ce n'est pas le cas, elle convertit le caractère en majuscule en soustrayant 32 de sa valeur ASCII
 * (ce qui est la différence entre les minuscules et les majuscules en ASCII). Si le caractère est déjà une majuscule, il est retourné inchangé.
 * La fonction retourne le caractère converti ou le caractère d'origine s'il était déjà en majuscule.
 */

#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_isupper(c))
		c = c - 32;
	return (c);
}