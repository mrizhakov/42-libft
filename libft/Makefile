# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 21:22:52 by mrizakov          #+#    #+#              #
#    Updated: 2023/01/02 17:05:22 by mrizakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
SRC =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strlen.c \
ft_memset.c ft_strncmp.c ft_memset.c ft_strnstr.c ft_memcmp.c \
ft_strlcat.c ft_calloc.c ft_strjoin.c ft_strchr.c ft_strrchr.c \
ft_memchr.c ft_memcpy.c ft_memmove.c ft_strdup.c ft_split.c \
ft_substr.c ft_strtrim.c \


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I. -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
