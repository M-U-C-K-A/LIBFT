/**
 *     _____ ___________  ___________ _     _____ _____ 
 *    /  ___|_   _| ___ \/  ___| ___ \ |   |_   _|_   _|
 *    \ `--.  | | | |_/ /\ `--.| |_/ / |     | |   | |  
 *     `--. \ | | |    /  `--. \  __/| |     | |   | |  
 *    /\__/ / | | | |\ \ /\__/ / |   | |_____| |_  | |  
 *    \____/  \_/ \_| \_|\____/\_|   \_____/\___/  \_/ 
 * Prototype : char **ft_strsplit(char const *s, char c);
 * 
 * @param s : Chaîne de caractères à découper en sous-chaînes.
 * @param c : Caractère délimitant les différentes sous-chaînes.
 * 
 * Variables utilisées :
 * - mem : Tableau de chaînes de caractères qui stockera les sous-chaînes extraites.
 * - i : Indice principal utilisé pour parcourir les mots.
 * - j : Indice utilisé pour parcourir la chaîne d'origine.
 * - k : Indice pour parcourir et remplir les sous-chaînes.
 * 
 * Fonctions utilisées :
 * - ft_wordcount() : Calcule le nombre de sous-chaînes séparées par le caractère `c`.
 * - ft_wordsize() : Calcule la taille d'une sous-chaîne entre deux occurrences du caractère `c`.
 * - malloc() : Alloue dynamiquement de la mémoire pour stocker les sous-chaînes et leur contenu.
 * 
 * Fonctionnement global :
 * La fonction `ft_strsplit` découpe la chaîne `s` en un tableau de sous-chaînes délimitées par le caractère `c`.
 * Elle alloue dynamiquement la mémoire pour chaque sous-chaîne en utilisant la fonction `ft_split`, qui se base 
 * sur le nombre de mots et la taille de chaque mot. Le tableau est ensuite rempli avec les sous-chaînes et se termine par NULL.
 */

#include "libft.h"

static int		ft_wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int		ft_wordsize(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char		**ft_split(char const *s, char c)
{
	char **mem;
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	if (!s || !c || !(mem = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (ft_wordcount(s, c) > ++i)
	{
		k = 0;
		printf("%d\n", i);
		if (!(mem[i] = (char*)malloc(sizeof(char) * (ft_wordsize(&s[j], c) + 1))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
				mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char	**ft_strsplit(char const *s, char c)
{
	if (!s || !c)
		return (NULL);
	return (ft_split(s, c));
}
