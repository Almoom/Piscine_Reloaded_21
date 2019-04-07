# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 12:52:31 by ljalikak          #+#    #+#              #
#    Updated: 2019/04/03 12:52:34 by ljalikak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
D_SRC = srcs/
D_HDR = includes/
SRC = $(D_SRC)ft_putchar.c $(D_SRC)ft_putstr.c $(D_SRC)ft_strcmp.c $(D_SRC)ft_strlen.c $(D_SRC)ft_swap.c

make:
	gcc -Wall -Wextra -Werror -c -I $(D_HDR) $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean make
