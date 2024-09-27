/**
 *     _____ ___________ _____ _____ _____ _____ 
 *    |_   _/  ___|  _  \_   _|  __ \_   _|_   _|
 *      | | \ `--.| | | | | | | |  \/ | |   | |  
 *      | |  `--. \ | | | | | | | __  | |   | |  
 *     _| |_/\__/ / |/ / _| |_| |_\ \_| |_  | |  
 *     \___/\____/|___/  \___/ \____/\___/  \_/ 
 * Prototype : int ft_isdigit(int c);
 * 
 * @param c : Le caractère à vérifier.
 * 
 * Fonctionnement global :
 * La fonction `ft_isdigit` vérifie si le caractère passé en argument est un chiffre décimal (entre '0' et '9'). Elle retourne 1 si le caractère
 * est un chiffre, sinon elle retourne 0. Cette fonction utilise les codes ASCII pour déterminer si le caractère se situe dans la plage des chiffres.
 */

#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}