# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsatou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:13:20 by bsatou            #+#    #+#              #
#    Updated: 2019/09/03 19:32:50 by bsatou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_putchar.c \
ft_putstr.c \
ft_strcat.c \
ft_strchr.c \
ft_strclr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_striter.c \
ft_striteri.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnew.c \
ft_strrchr.c \
ft_strstr.c \
ft_swap.c \
ft_tolower.c \
ft_toupper.c

OBJECTS = $(SRCS:%.c=%.o)

HEADERS = libft.h

all: $(NAME)

$(NAME): $(HEADERS) $(SRCS)
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)
fclean: clean
		rm -f $(NAME)
re: fclean all
