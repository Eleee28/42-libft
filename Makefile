# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:34:16 by ejuarros          #+#    #+#              #
#    Updated: 2023/10/05 11:54:52 by ejuarros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS_NAME = .bonus

MY_SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			 ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			 ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			 ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			 ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			 ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

REMOVE = rm -f

LIB = ar -crs

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(LIB) $(NAME) $(MY_OBJECTS)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(MY_OBJECTS) $(BONUS_OBJ)
	$(LIB) $(NAME) $(MY_OBJECTS) $(BONUS_OBJ)
	$(LIB) $(BONUS_NAME) $(MY_OBJECTS) $(BONUS_OBJ)

clean:
	$(REMOVE) $(MY_OBJECTS) $(BONUS_OBJ)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re 
# .PHONY used to mark a target as phony: it doesn't consider for execution any file that matches its name.


