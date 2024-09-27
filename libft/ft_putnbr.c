/**
 *    ______ _   _ _____ _   _ ____________             
 *    | ___ \ | | |_   _| \ | || ___ \ ___ \            
 *    | |_/ / | | | | | |  \| || |_/ / |_/ /            
 *    |  __/| | | | | | | . ` || ___ \    /             
 *    | |   | |_| | | | | |\  || |_/ / |\ \             
 *    \_|    \___/  \_/ \_| \_/\____/\_| \_| 
 * Prototype : void ft_putnbr(int n);
 * 
 * @param n : Entier à écrire sur la sortie standard.
 * 
 * Fonctionnement global :
 * La fonction `ft_putnbr` écrit l'entier `n` sur la sortie standard (stdout). Si `n` est égal à `-2147483648`
 * (la plus petite valeur possible pour un entier signé de 32 bits), elle utilise `ft_putstr` pour gérer ce cas particulier
 * car il ne peut être directement converti en chaîne de caractères. Pour les autres valeurs, si `n` est négatif, elle écrit
 * un signe moins (`-`) et rend `n` positif. Ensuite, elle effectue une conversion en chaîne de caractères en utilisant la
 * récursion pour gérer les chiffres les plus significatifs avant les moins significatifs. Chaque chiffre est écrit individuellement
 * en utilisant `ft_putchar`. Cette fonction est utile pour afficher des entiers sur la sortie standard.
 */

#include "libft.h"

void ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}