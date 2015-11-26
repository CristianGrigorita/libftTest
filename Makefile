
NAME = libft.a

SRCS = ft_isdigit.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_atoi.c     \
	ft_isprint.c ft_memset.c ft_strlcat.c ft_strrchr.c   		\
	ft_bzero.c ft_memccpy.c ft_strcat.c ft_strlen.c ft_isalnum.c    \
	ft_memchr.c ft_strchr.c ft_strncat.c ft_strstr.c ft_isalpha.c   \
	ft_memcmp.c ft_strcmp.c ft_strncmp.c ft_tolower.c ft_isascii.c  \
	ft_memcpy.c ft_strcpy.c ft_strncpy.c ft_toupper.c 		\

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
