# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elisa <elisa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 11:40:39 by elisa             #+#    #+#              #
#    Updated: 2023/02/21 11:49:52 by elisa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= push_swap.c

NAME= push_swap
CFLAGS = -Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)

all:$(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	gcc $(CFLAGS) $(OBJS) -framework OpenGL -framework AppKit -o $(NAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
