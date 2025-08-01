CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isdigit.c \
       ft_bzero.c ft_isalpha.c ft_strrchr.c ft_atoi.c ft_memset.c ft_memchr.c \
	   ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	   ft_strchr.c ft_memmove.c ft_strncmp.c ft_strjoin.c ft_memcmp.c \
	   ft_strnstr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_split.c ft_strtrim.c \
	   ft_itoa.c ft_strmapi.c ft_striteri.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
            ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
            ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re