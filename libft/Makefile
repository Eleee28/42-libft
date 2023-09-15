# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:34:16 by ejuarros          #+#    #+#              #
#    Updated: 2023/09/15 19:00:31 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# include header file
# create lib


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

#$(NAME): $(MY_OBJECTS)
#	cc $(CFLAGS) $(MY_OBJECTS) -o $(NAME)  

$(NAME): $(MY_OBJECTS)
	ar -crs $(CFLAGS) $(MY_OBJECTS) -o $(NAME)

clean:
	$(REMOVE) $(MY_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all


# check all files are added, and add the voluntary part
# MIRAR CAPTURA DE PANTALLA PARA HACER EL MAKEFILE!!