<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/libftm.png?raw=true" alt="ready to help"/>
</p>

<h1 align="center">
 LIBFT
</h1>

<p align="center">
	<b><i>Your very first own library</i></b><br>
</p>
<p align="center">
	<b><i>124/100</i></b><br>
</p>




# Libft - Documentation

Cette documentation contient des informations détaillées sur chaque fonction implémentée dans la bibliothèque **libft**, avec leurs prototypes, leur fonctionnement, les paramètres acceptés et les valeurs de retour.

## Table des matières

- [ft_abs](#ft_abs)
- [ft_atoi](#ft_atoi)
- [ft_bzero](#ft_bzero)
- [ft_isalpha](#ft_isalpha)
- [ft_isascii](#ft_isascii)
- [ft_isdigit](#ft_isdigit)
- [ft_islower](#ft_islower)
- [ft_isprint](#ft_isprint)
- [ft_isupper](#ft_isupper)
- [ft_isalnum](#ft_isalnum)
- [ft_itoa](#ft_itoa)
- [ft_lstadd](#ft_lstadd)
- [ft_lstdelone](#ft_lstdelone)
- [ft_lstiter](#ft_lstiter)
- [ft_lstadd_back](#ft_lstadd_back)
- [ft_lstadd_front](#ft_lstadd_front)
- [ft_lstclear](#ft_lstclear)
- [ft_lstlast](#ft_lstlast)
- [ft_lstsize](#ft_lstsize)
- [ft_lstnew](#ft_lstnew)
- [ft_lstmap](#ft_lstmap)
- [ft_calloc](#ft_calloc)
- [ft_memalloc](#ft_memalloc)
- [ft_memccpy](#ft_memccpy)
- [ft_memchr](#ft_memchr)
- [ft_memcmp](#ft_memcmp)
- [ft_memcpy](#ft_memcpy)
- [ft_memdel](#ft_memdel)
- [ft_memmove](#ft_memmove)
- [ft_memset](#ft_memset)
- [ft_putchar_fd](#ft_putchar_fd)
- [ft_putchar](#ft_putchar)
- [ft_putendl_fd](#ft_putendl_fd)
- [ft_putendl](#ft_putendl)
- [ft_putnbr_fd](#ft_putnbr_fd)
- [ft_putnbr](#ft_putnbr)
- [ft_putstr_fd](#ft_putstr_fd)
- [ft_putstr](#ft_putstr)
- [ft_strchr](#ft_strchr)
- [ft_strclr](#ft_strclr)
- [ft_strcmp](#ft_strcmp)
- [ft_strcpy](#ft_strcpy)
- [ft_strdel](#ft_strdel)
- [ft_strdup](#ft_strdup)
- [ft_strequ](#ft_strequ)
- [ft_strnequ](#ft_strnequ)
- [ft_striter](#ft_striter)
- [ft_striteri](#ft_striteri)
- [ft_strjoin](#ft_strjoin)
- [ft_strmap](#ft_strmap)
- [ft_strmapi](#ft_strmapi)
- [ft_strlen](#ft_strlen)
- [ft_strlcat](#ft_strlcat)
- [ft_strlcpy](#ft_strlcpy)
- [ft_strncmp](#ft_strncmp)
- [ft_strcat](#ft_strcat)
- [ft_strncat](#ft_strncat)
- [ft_strncpy](#ft_strncpy)
- [ft_strnstr](#ft_strnstr)
- [ft_strnew](#ft_strnew)
- [ft_strrchr](#ft_strrchr)
- [ft_strsplit](#ft_strsplit)
- [ft_split](#ft_split)
- [ft_strsub](#ft_strsub)
- [ft_strtrim](#ft_strtrim)
- [ft_substr](#ft_substr)
- [ft_tolower](#ft_tolower)
- [ft_toupper](#ft_toupper)

---

## ft_abs

```c
int ft_abs(int c);
```

### Fonctionnement
Renvoie la valeur absolue d'un entier donné. Si l'entier est négatif, il sera converti en sa valeur positive.

### Paramètres
- `c` : L'entier dont on veut obtenir la valeur absolue.

### Valeur de retour
Renvoie la valeur absolue de `c`.

---

## ft_atoi

```c
int ft_atoi(const char *str);
```

### Fonctionnement
Convertit une chaîne de caractères en entier. La conversion s'arrête dès qu'un caractère non numérique est rencontré.

### Paramètres
- `str` : La chaîne de caractères à convertir.

### Valeur de retour
Renvoie l'entier correspondant à la chaîne. Si aucun entier valide n'est trouvé, la fonction renverra 0.

---

## ft_bzero

```c
void ft_bzero(void *s, size_t n);
```

### Fonctionnement
Met à zéro (remplit avec des octets de valeur 0) les `n` premiers octets de la zone mémoire pointée par `s`.

### Paramètres
- `s` : Le pointeur vers la zone mémoire à remplir.
- `n` : Le nombre d'octets à mettre à zéro.

### Valeur de retour
Aucune. La fonction agit directement sur la mémoire pointée par `s`.

---

## ft_isalpha

```c
int ft_isalpha(int c);
```

### Fonctionnement
Vérifie si le caractère donné est une lettre de l'alphabet (a-z ou A-Z).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est une lettre alphabétique, 0 sinon.

---

## ft_isascii

```c
int ft_isascii(int c);
```

### Fonctionnement
Vérifie si le caractère donné appartient à la table ASCII (valeur entre 0 et 127).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est un caractère ASCII valide, 0 sinon.

---

## ft_isdigit

```c
int ft_isdigit(int c);
```

### Fonctionnement
Vérifie si le caractère donné est un chiffre (0-9).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est un chiffre, 0 sinon.

---

## ft_islower

```c
int ft_islower(int c);
```

### Fonctionnement
Vérifie si le caractère donné est une lettre minuscule (a-z).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est une lettre minuscule, 0 sinon.

---

## ft_isprint

```c
int ft_isprint(int c);
```

### Fonctionnement
Vérifie si le caractère donné est imprimable, y compris les espaces.

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est un caractère imprimable, 0 sinon.

---

## ft_isupper

```c
int ft_isupper(int c);
```

### Fonctionnement
Vérifie si le caractère donné est une lettre majuscule (A-Z).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est une lettre majuscule, 0 sinon.

---

## ft_isalnum

```c
int ft_isalnum(int c);
```

### Fonctionnement
Vérifie si le caractère donné est une lettre (majuscule ou minuscule) ou un chiffre (0-9).

### Paramètres
- `c` : Le caractère à vérifier.

### Valeur de retour
Renvoie 1 si `c` est une lettre ou un chiffre, 0 sinon.

---

## ft_itoa

```c
char *ft_itoa(int n);
```

### Fonctionnement
Convertit un entier donné en une chaîne de caractères (représentation en base 10).

### Paramètres
- `n` : L'entier à convertir.

### Valeur de retour
Renvoie une chaîne de caractères représentant l'entier `n`.

---

Très bien, voici la suite complète du README pour toutes les fonctions fournies :

---

## ft_lstadd

```c
void ft_lstadd(t_list **alst, t_list *new);
```

### Fonctionnement
Ajoute un nouvel élément `new` au début de la liste pointée par `alst`.

### Paramètres
- `alst` : Un pointeur vers le premier élément de la liste.
- `new` : Le nouvel élément à ajouter.

### Valeur de retour
Aucune.

---

## ft_lstdelone

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

### Fonctionnement
Libère la mémoire de l'élément `lst` en utilisant la fonction `del`, puis libère `lst`.

### Paramètres
- `lst` : L'élément à supprimer.
- `del` : Fonction pour libérer le contenu de l'élément.

### Valeur de retour
Aucune.

---

## ft_lstiter

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

### Fonctionnement
Applique la fonction `f` à chaque élément de la liste.

### Paramètres
- `lst` : Le premier élément de la liste.
- `f` : La fonction à appliquer sur chaque élément.

### Valeur de retour
Aucune.

---

## ft_lstadd_back

```c
void ft_lstadd_back(t_list **alst, t_list *new);
```

### Fonctionnement
Ajoute un nouvel élément `new` à la fin de la liste pointée par `alst`.

### Paramètres
- `alst` : Un pointeur vers le premier élément de la liste.
- `new` : Le nouvel élément à ajouter.

### Valeur de retour
Aucune.

---

## ft_lstadd_front

```c
void ft_lstadd_front(t_list **alst, t_list *new);
```

### Fonctionnement
Ajoute un nouvel élément `new` au début de la liste pointée par `alst`.

### Paramètres
- `alst` : Un pointeur vers le premier élément de la liste.
- `new` : Le nouvel élément à ajouter.

### Valeur de retour
Aucune.

---

## ft_lstclear

```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```

### Fonctionnement
Supprime et libère la mémoire de tous les éléments de la liste, en utilisant la fonction `del` pour libérer le contenu de chaque élément, puis libère la liste elle-même.

### Paramètres
- `lst` : Un pointeur vers le premier élément de la liste.
- `del` : La fonction pour libérer le contenu de chaque élément.

### Valeur de retour
Aucune.

---

## ft_lstlast

```c
t_list *ft_lstlast(t_list *lst);
```

### Fonctionnement
Renvoie le dernier élément de la liste.

### Paramètres
- `lst` : Le premier élément de la liste.

### Valeur de retour
Renvoie le dernier élément de la liste, ou `NULL` si la liste est vide.

---

## ft_lstsize

```c
int ft_lstsize(t_list *lst);
```

### Fonctionnement
Compte le nombre d'éléments dans la liste.

### Paramètres
- `lst` : Le premier élément de la liste.

### Valeur de retour
Renvoie le nombre d'éléments dans la liste.

---

## ft_lstnew

```c
t_list *ft_lstnew(void const *content);
```

### Fonctionnement
Crée un nouvel élément de liste avec le contenu donné.

### Paramètres
- `content` : Le contenu à ajouter dans le nouvel élément.

### Valeur de retour
Renvoie le nouvel élément créé, ou `NULL` en cas d'échec de la création.

---

## ft_lstmap

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

### Fonctionnement
Crée une nouvelle liste résultant de l'application de la fonction `f` à chaque élément de la liste, en utilisant `del` en cas d'échec pour nettoyer la mémoire.

### Paramètres
- `lst` : Le premier élément de la liste d'origine.
- `f` : La fonction à appliquer à chaque élément.
- `del` : La fonction pour libérer le contenu en cas d'erreur.

### Valeur de retour
Renvoie la nouvelle liste, ou `NULL` en cas d'échec.

---

## ft_calloc

```c
void *ft_calloc(size_t count, size_t size);
```

### Fonctionnement
Alloue la mémoire pour un tableau de `count` éléments de `size` octets chacun, et initialise tous les octets à 0.

### Paramètres
- `count` : Le nombre d'éléments à allouer.
- `size` : La taille de chaque élément.

### Valeur de retour
Renvoie un pointeur vers la mémoire allouée, ou `NULL` en cas d'échec.

---

## ft_memalloc

```c
void *ft_memalloc(size_t size);
```

### Fonctionnement
Alloue et initialise à 0 une zone de mémoire de `size` octets.

### Paramètres
- `size` : La taille de la zone mémoire à allouer.

### Valeur de retour
Renvoie un pointeur vers la mémoire allouée, ou `NULL` en cas d'échec.

---

## ft_memccpy

```c
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
```

### Fonctionnement
Copie des octets de `src` vers `dst` jusqu'à ce que `n` octets soient copiés ou que le caractère `c` soit trouvé.

### Paramètres
- `dst` : Le pointeur vers la destination.
- `src` : Le pointeur vers la source.
- `c` : Le caractère à rechercher pour arrêter la copie.
- `n` : Le nombre maximum d'octets à copier.

### Valeur de retour
Renvoie un pointeur vers l'octet suivant `c` dans `dst`, ou `NULL` si `c` n'est pas trouvé.

---

## ft_memchr

```c
void *ft_memchr(const void *s, int c, size_t n);
```

### Fonctionnement
Recherche la première occurrence de `c` dans les `n` premiers octets de la zone mémoire pointée par `s`.

### Paramètres
- `s` : Le pointeur vers la zone mémoire.
- `c` : Le caractère à rechercher.
- `n` : Le nombre d'octets à examiner.

### Valeur de retour
Renvoie un pointeur vers la première occurrence de `c`, ou `NULL` si le caractère n'est pas trouvé.

---

## ft_memcmp

```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

### Fonctionnement
Compare les `n` premiers octets des zones mémoire `s1` et `s2`.

### Paramètres
- `s1` : La première zone mémoire.
- `s2` : La seconde zone mémoire.
- `n` : Le nombre d'octets à comparer.

### Valeur de retour
Renvoie 0 si les zones sont égales, un nombre négatif ou positif selon que `s1` est inférieur ou supérieur à `s2`.

---

## ft_memcpy

```c
void *ft_memcpy(void *dst, const void *src, size_t n);
```

### Fonctionnement
Copie `n` octets de la zone mémoire `src` vers `dst`.

### Paramètres
- `dst` : Le pointeur vers la destination.
- `src` : Le pointeur vers la source.
- `n` : Le nombre d'octets à copier.

### Valeur de retour
Renvoie un pointeur vers `dst`.

---

## ft_memdel

```c
void ft_memdel(void **ap);
```

### Fonctionnement
Libère une zone mémoire pointée par `ap` et met son pointeur à `NULL`.

### Paramètres
- `ap` : Un double pointeur vers la zone mémoire à libérer.

### Valeur de retour
Aucune.

---

## ft_memmove

```c
void *ft_memmove(void *dst, const void *src, size_t len);
```

### Fonctionnement
Copie `len` octets de la zone mémoire `src` vers `dst`, en gérant le chevauchement des zones mémoire.

### Paramètres
- `dst` : Le pointeur vers la destination.
- `src` : Le pointeur vers la source.
- `len` : Le nombre d'octets à copier.

### Valeur de retour
Renvoie un pointeur vers `dst`.

---

## ft_memset

```c
void *ft_memset(void *b, int c, size_t len);
```

### Fonctionnement
Remplit les `len` premiers octets de la zone mémoire pointée par `b` avec le caractère `c`.

### Paramètres
- `b` : Le pointeur vers la zone mémoire.
- `c` : Le caractère à utiliser pour le remplissage.
- `len` : Le nombre d'octets à remplir.

### Valeur de retour
Renvoie un pointeur vers `b`.

---

## ft_putchar_fd

```c
void ft_putchar_fd(char c, int fd);
```

### Fonctionnement


Écrit le caractère `c` sur le descripteur de fichier `fd`.

### Paramètres
- `c` : Le caractère à écrire.
- `fd` : Le descripteur de fichier.

### Valeur de retour
Aucune.

---

## ft_putchar

```c
void ft_putchar(char c);
```

### Fonctionnement
Écrit le caractère `c` sur la sortie standard (équivalent à `ft_putchar_fd(c, 1)`).

### Paramètres
- `c` : Le caractère à écrire.

### Valeur de retour
Aucune.

---

## ft_putendl_fd

```c
void ft_putendl_fd(char const *s, int fd);
```

### Fonctionnement
Écrit la chaîne `s` suivie d'un saut de ligne sur le descripteur de fichier `fd`.

### Paramètres
- `s` : La chaîne de caractères à écrire.
- `fd` : Le descripteur de fichier.

### Valeur de retour
Aucune.

---

## ft_putendl

```c
void ft_putendl(char const *s);
```

### Fonctionnement
Écrit la chaîne `s` suivie d'un saut de ligne sur la sortie standard.

### Paramètres
- `s` : La chaîne de caractères à écrire.

### Valeur de retour
Aucune.

---

## ft_putnbr_fd

```c
void ft_putnbr_fd(int n, int fd);
```

### Fonctionnement
Écrit l'entier `n` sur le descripteur de fichier `fd`.

### Paramètres
- `n` : L'entier à écrire.
- `fd` : Le descripteur de fichier.

### Valeur de retour
Aucune.

---

## ft_putnbr

```c
void ft_putnbr(int n);
```

### Fonctionnement
Écrit l'entier `n` sur la sortie standard.

### Paramètres
- `n` : L'entier à écrire.

### Valeur de retour
Aucune.

---

## ft_putstr_fd

```c
void ft_putstr_fd(char const *s, int fd);
```

### Fonctionnement
Écrit la chaîne `s` sur le descripteur de fichier `fd`.

### Paramètres
- `s` : La chaîne de caractères à écrire.
- `fd` : Le descripteur de fichier.

### Valeur de retour
Aucune.

---

## ft_putstr

```c
void ft_putstr(char const *s);
```

### Fonctionnement
Écrit la chaîne `s` sur la sortie standard.

### Paramètres
- `s` : La chaîne de caractères à écrire.

### Valeur de retour
Aucune.

Je vais continuer en incluant toutes les fonctions manquantes, y compris celles que tu as mentionnées comme `ft_strdel` et les autres :

---

## ft_strdel

```c
void ft_strdel(char **as);
```

### Fonctionnement
Libère la mémoire allouée pour la chaîne pointée par `*as` et met son pointeur à `NULL`.

### Paramètres
- `as` : Un double pointeur vers la chaîne de caractères à libérer.

### Valeur de retour
Aucune.

---

## ft_strdup

```c
char *ft_strdup(const char *s1);
```

### Fonctionnement
Duplique la chaîne `s1` en allouant la mémoire nécessaire et en copiant le contenu.

### Paramètres
- `s1` : La chaîne à dupliquer.

### Valeur de retour
Renvoie un pointeur vers la nouvelle chaîne dupliquée ou `NULL` en cas d'erreur.

---

## ft_strequ

```c
int ft_strequ(char const *s1, char const *s2);
```

### Fonctionnement
Compare deux chaînes et renvoie `1` si elles sont égales, `0` sinon.

### Paramètres
- `s1` : La première chaîne à comparer.
- `s2` : La deuxième chaîne à comparer.

### Valeur de retour
Renvoie `1` si les chaînes sont égales, `0` sinon.

---

## ft_strnequ

```c
int ft_strnequ(char const *s1, char const *s2, size_t n);
```

### Fonctionnement
Compare les `n` premiers caractères de deux chaînes et renvoie `1` si elles sont égales, `0` sinon.

### Paramètres
- `s1` : La première chaîne à comparer.
- `s2` : La deuxième chaîne à comparer.
- `n` : Le nombre de caractères à comparer.

### Valeur de retour
Renvoie `1` si les chaînes sont égales jusqu'à `n` caractères, `0` sinon.

---

## ft_striter

```c
void ft_striter(char *s, void (*f)(char *));
```

### Fonctionnement
Applique la fonction `f` à chaque caractère de la chaîne `s`.

### Paramètres
- `s` : La chaîne sur laquelle appliquer la fonction.
- `f` : La fonction à appliquer à chaque caractère.

### Valeur de retour
Aucune.

---

## ft_striteri

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

### Fonctionnement
Applique la fonction `f` à chaque caractère de la chaîne `s`, en passant également l'index du caractère à la fonction `f`.

### Paramètres
- `s` : La chaîne sur laquelle appliquer la fonction.
- `f` : La fonction à appliquer à chaque caractère, prenant l'index et le caractère en paramètre.

### Valeur de retour
Aucune.

---

## ft_strjoin

```c
char *ft_strjoin(char const *s1, char const *s2);
```

### Fonctionnement
Alloue et renvoie une nouvelle chaîne de caractères qui est la concaténation de `s1` et `s2`.

### Paramètres
- `s1` : La première chaîne.
- `s2` : La deuxième chaîne.

### Valeur de retour
Renvoie la nouvelle chaîne concaténée ou `NULL` en cas d'échec.

---

## ft_strmap

```c
char *ft_strmap(char const *s, char (*f)(char));
```

### Fonctionnement
Applique la fonction `f` à chaque caractère de la chaîne `s` pour créer une nouvelle chaîne avec les résultats de la fonction.

### Paramètres
- `s` : La chaîne originale.
- `f` : La fonction à appliquer à chaque caractère.

### Valeur de retour
Renvoie une nouvelle chaîne résultant de l'application de `f` à chaque caractère, ou `NULL` en cas d'échec.

---

## ft_strmapi

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

### Fonctionnement
Applique la fonction `f` à chaque caractère de la chaîne `s`, en passant également l'index du caractère, pour créer une nouvelle chaîne.

### Paramètres
- `s` : La chaîne originale.
- `f` : La fonction à appliquer à chaque caractère, prenant l'index et le caractère en paramètres.

### Valeur de retour
Renvoie une nouvelle chaîne résultant de l'application de `f` à chaque caractère, ou `NULL` en cas d'échec.

---

## ft_strlen

```c
size_t ft_strlen(const char *s);
```

### Fonctionnement
Calcule la longueur de la chaîne `s`, c'est-à-dire le nombre de caractères avant le caractère nul.

### Paramètres
- `s` : La chaîne dont on veut calculer la longueur.

### Valeur de retour
Renvoie le nombre de caractères dans la chaîne `s`.

---

## ft_strlcat

```c
size_t ft_strlcat(char *dst, const char *src, size_t size);
```

### Fonctionnement
Concatène la chaîne `src` à la fin de `dst`, en respectant la taille maximale `size`.

### Paramètres
- `dst` : La chaîne de destination.
- `src` : La chaîne source à ajouter.
- `size` : La taille totale du buffer de destination.

### Valeur de retour
Renvoie la longueur totale de la chaîne que la fonction a tenté de créer, c'est-à-dire `strlen(src) + MIN(size, strlen(dst))`.

---

## ft_strlcpy

```c
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```

### Fonctionnement
Copie jusqu'à `size - 1` caractères de la chaîne `src` dans `dst`, en terminant toujours par un caractère nul.

### Paramètres
- `dst` : La chaîne de destination.
- `src` : La chaîne source.
- `size` : La taille maximale du buffer de destination.

### Valeur de retour
Renvoie la longueur de la chaîne `src`.

---

## ft_strncmp

```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```

### Fonctionnement
Compare les `n` premiers caractères des chaînes `s1` et `s2`.

### Paramètres
- `s1` : La première chaîne.
- `s2` : La deuxième chaîne.
- `n` : Le nombre de caractères à comparer.

### Valeur de retour
Renvoie un entier inférieur, égal ou supérieur à 0 si `s1` est respectivement inférieure, égale ou supérieure à `s2`.

---

## ft_strcat

```c
char *ft_strcat(char *s1, const char *s2);
```

### Fonctionnement
Concatène la chaîne `s2` à la fin de `s1` et renvoie `s1`.

### Paramètres
- `s1` : La chaîne de destination.
- `s2` : La chaîne source.

### Valeur de retour
Renvoie la chaîne `s1`.

---

## ft_strncat

```c
char *ft_strncat(char *s1, const char *s2, size_t n);
```

### Fonctionnement
Concatène au plus `n` caractères de `s2` à la fin de `s1` et renvoie `s1`.

### Paramètres
- `s1` : La chaîne de destination.
- `s2` : La chaîne source.
- `n` : Le nombre maximal de caractères à concaténer.

### Valeur de retour
Renvoie la chaîne `s1`.

---

## ft_strncpy

```c
char *ft_strncpy(char *dst, const char *src, size_t len);
```

### Fonctionnement
Copie au plus `len` caractères de `src` dans `dst`. Si `src` est plus courte que `len`, remplit les caractères restants avec des zéros.

### Paramètres
- `dst` : La chaîne de destination.
- `src` : La chaîne source.
- `len` : Le nombre maximal de caractères à copier.

### Valeur de retour
Renvoie la chaîne `dst`.

---

## ft_strnstr

```c
char *ft_strnstr(const char *big, const char *little, size_t len);
```

### Fonctionnement
Recherche la sous-chaîne `little` dans la chaîne `big`, mais seulement dans les `len` premiers caractères de `big`.

### Paramètres
- `big` : La chaîne dans laquelle rechercher.
- `little` : La sous-chaîne à rechercher.
- `len` : Le nombre maximal de caractères à rechercher.

### Valeur de retour
Renvoie un pointeur vers le début de la sous-chaîne trouvée, ou `NULL` si elle n'est pas présente.

---

## ft_strnew

```c
char *ft_strnew(size_t size);
```

### Fonctionnement
Alloue une nouvelle chaîne de caractères de `size` octets et l'initialise à 0.

### Paramètres
- `size` : La taille de la chaîne à allouer.

### Valeur de retour
Renvoie un pointeur vers la nouvelle chaîne ou `NULL` en cas d'échec.

---

## ft_strrchr

```c
char *ft_strrchr(const char *s, int c);
```

### Fonctionnement
Recherche la dernière

 occurrence du caractère `c` dans la chaîne `s`.

### Paramètres
- `s` : La chaîne dans laquelle chercher.
- `c` : Le caractère à rechercher.

### Valeur de retour
Renvoie un pointeur vers la dernière occurrence de `c` ou `NULL` si le caractère n'est pas trouvé.

---

## ft_strsplit

```c
char **ft_strsplit(char const *s, char c);
```

### Fonctionnement
Divise la chaîne `s` en sous-chaînes en fonction du caractère délimiteur `c`. Alloue un tableau de chaînes contenant chaque segment.

### Paramètres
- `s` : La chaîne à diviser.
- `c` : Le caractère de délimitation.

### Valeur de retour
Renvoie un tableau de chaînes ou `NULL` en cas d'échec.

---

## ft_split

```c
char **ft_split(char const *s, char c);
```

### Fonctionnement
Identique à `ft_strsplit`, divise la chaîne `s` en fonction du caractère délimiteur `c`.

### Paramètres
- `s` : La chaîne à diviser.
- `c` : Le caractère de délimitation.

### Valeur de retour
Renvoie un tableau de chaînes ou `NULL` en cas d'échec.

