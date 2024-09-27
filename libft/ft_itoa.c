/** 
 *     _____ _____ _____  ___                                 
 *    |_   _|_   _|  _  |/ _ \                                
 *      | |   | | | | | / /_\ \                               
 *      | |   | | | | | |  _  |                               
 *     _| |_  | | \ \_/ / | | |                               
 *     \___/  \_/  \___/\_| |_/ 
 * Prototype : char *ft_itoa(int n);
 * 
 * @param n : Entier à convertir en chaîne de caractères.
 * 
 * Variables utilisées :
 * - str : Pointeur vers la chaîne de caractères allouée pour contenir la représentation de l'entier.
 * - len : Longueur de la chaîne de caractères nécessaire pour représenter l'entier.
 * - neg : Indicateur pour les entiers négatifs (1 si négatif, 0 sinon).
 * 
 * Fonctions utilisées :
 * - ft_intlen() : Calcule la longueur de la représentation en chaîne d'un entier.
 * - ft_inttoa() : Remplit la chaîne de caractères avec les chiffres de l'entier.
 * - malloc() : Alloue dynamiquement de la mémoire pour la chaîne de caractères.
 * 
 * Fonctionnement global :
 * La fonction `ft_itoa` convertit un entier `n` en une chaîne de caractères. Elle détermine la longueur
 * nécessaire pour représenter l'entier, alloue la mémoire pour la chaîne de caractères (en tenant compte
 * de la présence éventuelle d'un signe négatif), et remplit la chaîne avec les chiffres de l'entier. 
 * Si `n` est égal à 0, la chaîne résultante est simplement `"0"`. La chaîne est terminée par un caractère
 * nul (`\0`), et la fonction retourne un pointeur vers cette chaîne.
 */

#include "libft.h"

int		ft_intlen(int n)
{
	int		len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

void		ft_inttoa(int n, char *str)
{
	int		i;
	int		len;

	len = ft_intlen(n);
	i = len - 1;
	while (i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	len = (n == 0) ? 1 : ft_intlen(n);
	neg = (n < 0) ? 1 : 0;
	str = (char*)malloc(len + neg + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	else
	{
		if (neg)
			str[0] = '-';
		ft_inttoa(n, str + neg + len - 1);
	}
	str[len + neg] = '\0';
	return (str);
}
