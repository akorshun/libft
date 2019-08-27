# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsatou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:13:20 by bsatou            #+#    #+#              #
#    Updated: 2019/07/16 18:18:53 by bsatou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_strlcat.c \
	srcs/ft_strcat.c \
	srcs/ft_memcpy.c \
	srcs/ft_strcpy.c \
	srcs/ft_putchar.c \
	srcs/ft_toupper.c \
	srcs/ft_isalpha.c \
	srcs/ft_strncmp.c \
	srcs/ft_strlen.c \
	srcs/ft_strcmp.c \
	srcs/ft_bzero.c \
	srcs/ft_strncat.c \
	srcs/ft_isdigit.c \
	srcs/ft_memccpy.c \
	srcs/ft_putstr.c \
	srcs/ft_atoi.c \
	srcs/ft_isprint.c \
	srcs/ft_isascii.c \
	srcs/ft_memset.c \
	srcs/ft_tolower.c \
	srcs/ft_strchr.c \
	srcs/ft_isalnum.c \
	srcs/ft_swap.c \
	srcs/ft_strstr.c \
	srcs/ft_strdup.c \
	srcs/ft_strrchr.c \
	srcs/ft_strlcpy.c \
	srcs/ft_strncpy.c

OBJECTS = $(SRCS:srcs/%.c=%.o)

HEADERS = includes/

all: $(NAME)

$(NAME): $(HEADERS) $(SRCS)
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)
fclean: clean
		rm -f $(NAME)
re: fclean all
