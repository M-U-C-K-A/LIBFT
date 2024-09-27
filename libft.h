#pragma once



/**     ___  ___ ___ _  _   _ _  _____   ___ ___ _____ _____ ___ _  _  ___ ___ 
 *     |   \| __| __/_\| | | | ||_   _| / __| __|_   _|_   _|_ _| \| |/ __/ __|
 *     | |) | _|| _/ _ \ |_| | |__| |   \__ \ _|  | |   | |  | || .` | (_ \__ \
 *     |___/|___|_/_/ \_\___/|____|_|   |___/___| |_|   |_| |___|_|\_|\___|___/	*/

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# define BUFF_SIZE 32

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;


/**     ___ _____ ___ ___ _  _  ___                                                                                          
 *     / __|_   _| _ \_ _| \| |/ __|                                                                                         
 *     \__ \ | | |   /| || .` | (_ |                                                                                         
 *     |___/ |_| |_|_\___|_|\_|\___|	*/

int					ft_abs(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isupper(int c);
char				*ft_itoa(int n);

/**     _    ___ ___ _____                                                                                                   
 *     | |  |_ _/ __|_   _|                                                                                                  
 *     | |__ | |\__ \ | |                                                                                                    
 *     |____|___|___/ |_|	*/
 
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

/**     __  __ ___ __  __  ___  _____   __                                                                                   
 *     |  \/  | __|  \/  |/ _ \| _ \ \ / /                                                                                   
 *     | |\/| | _|| |\/| | (_) |   /\ V /                                                                                    
 *     |_|  |_|___|_|  |_|\___/|_|_\ |_|	*/

void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);

/**     ___ _  _ ___ _   _ _____     __   ___  _   _ _____ ___ _   _ _____                                                   
 *     |_ _| \| | _ \ | | |_   _|   / /  / _ \| | | |_   _| _ \ | | |_   _|                                                  
 *      | || .` |  _/ |_| | | |    / /  | (_) | |_| | | | |  _/ |_| | | |                                                    
 *     |___|_|\_|_|  \___/  |_|   /_/    \___/ \___/  |_| |_|  \___/  |_|	*/

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);

/**     ___ ___   _   ___  ___ _  _     __   ___ ___  __  __ ___  _   ___ ___                                                    
 *     / __| __| /_\ | _ \/ __| || |   / /  / __/ _ \|  \/  | _ \/_\ | _ \ __|                                                   
 *     \__ \ _| / _ \|   / (__| __ |  / /  | (_| (_) | |\/| |  _/ _ \|   / _|                                                    
 *     |___/___/_/ \_\_|_\\___|_||_| /_/    \___\___/|_|  |_|_|/_/ \_\_|_\___|	*/

char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *as);
int 				ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);

/**      ___ _____ ___ ___ _  _  ___   __  __   _   _  _ ___ __                             
 *     / __|_   _| _ \_ _| \| |/ __| |  \/  | /_\ | \| |_ _| _ \                            
 *     \__ \ | | |   /| || .` | (_ | | |\/| |/ _ \| .` || ||  _/                            
 *     |___/ |_| |_|_\___|_|\_|\___| |_|  |_/_/ \_\_|\_|___|_|	*/

void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t				ft_strlen(const char *s);
char				*ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strnstr(const char *big, const char *little, size_t len);
char			    *ft_strnew(size_t size);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);

/**     ___ _____ ___ ___     __  _____ ___    _   _  _ ___ ___ ___  ___ __  __                    
 *     |_ _|_   _| __| _ \   / / |_   _| _ \  /_\ | \| / __| __/ _ \| _ \  \/  |                   
 *      | |  | | | _||   /  / /    | | |   / / _ \| .` \__ \ _| (_) |   / |\/| |                   
 *     |___| |_| |___|_|_\ /_/     |_| |_|_\/_/ \_\_|\_|___/_| \___/|_|_\_|  |_|	*/

int					ft_tolower(int c);
int					ft_toupper(int c);