NAME = libft.a

MY_SOURCES = ft_atoi.c \
			 ft_bzero.c \
			 ft_isalnum.c \
			 ft_isalpha.c \
			 ft_isascii.c \
			 ft_isdigit.c \
			 ft_isprint.c \
			 ft_memchr.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c \
			 ft_strchr.c \
			 ft_strlcat.c \
			 ft_strlcpy.c \
			 ft_strlen.c \
			 ft_strncmp.c \
			 ft_strnstr.c \
			 ft_strrchr.c \
			 ft_tolower.c \
			 ft_toupper.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

REMOVE = rm -f

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS) $(CFLAGS)

clean:
	$(REMOVE) $(MY_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all


# check all files are added, and add the voluntary part
# MIRAR CAPTURA DE PANTALLA PARA HACER EL MAKEFILE!!