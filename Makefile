#   __   __ _    ___  ___    _    ___  _     ___  ___ 
#   \ \ / //_\  | _ \|_ _|  /_\  | _ )| |   | __|/ __|
#    \ V // _ \ |   / | |  / _ \ | _ \| |__ | _| \__ \
#     \_//_/ \_\|_|_\|___|/_/ \_\|___/|____||___||___/
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_abs.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_islower.c ft_isprint.c ft_isupper.c ft_itoa.c \
	   ft_lstadd.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	   ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	   ft_memdel.c ft_memmove.c ft_memset.c \
	   ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
	   ft_putstr_fd.c ft_putstr.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
	   ft_strdel.c ft_strdup.c ft_strequ.c ft_strnequ.c ft_striter.c ft_striteri.c \
	   ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strlen.c ft_strlcat.c ft_strcat.c \
	   ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strnew.c ft_strrchr.c ft_strsplit.c \
	   ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

#    ___  _   _  _     ___  ___ 
#   | _ \| | | || |   | __|/ __|
#   |   /| |_| || |__ | _| \__ \
#   |_|_\ \___/ |____||___||___/
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
