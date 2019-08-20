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

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c \
		srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c

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
