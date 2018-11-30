# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jahong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 21:40:14 by jahong            #+#    #+#              #
#    Updated: 2018/09/13 19:39:09 by jahong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

INCLD = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all
