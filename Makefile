# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esommier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 15:10:27 by esommier          #+#    #+#              #
#    Updated: 2020/01/06 13:31:48 by esommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		= ft_printf.c \

FLAGS		= -Wall -Wextra -Werror

INCLUDE 	= libftprintf.h

OBJS 		= $(SRC:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS)# $(INCLUDE)
				make -C ./libft/
				cp ./libft/libft.a ./$(NAME)
				ar rcs $(NAME) $(OBJS)

#$(OBJS):		$(SRC)
#				gcc $(FLAGS) $(SRC) -I $(INCLUDE)

%.o: %.c
				gcc $(FLAGS) -c $< -o $@
clean:
				rm -f $(OBJS)
				make clean -C ./libft/

fclean:			clean
				rm -f $(NAME)
				make fclean -C ./libft/

re:				fclean all

.PHONY:			re clean fclean all
