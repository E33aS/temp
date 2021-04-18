# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esommier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 15:10:27 by esommier          #+#    #+#              #
#    Updated: 2020/01/06 15:43:33 by esommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_strlen.c \
			getlenhexa.c \
			getlenptr.c \
			ft_charjoin.c \
			ft_strchr.c \
			ft_getstrchr.c \
			ft_strstr.c \
			ft_substr.c \
			ft_isdigit.c \
			ft_isspace.c \
			ft_isneg.c \
			ft_atoi_simple.c \
			ft_putnbr.c \
			ft_putnstr.c \
			ft_putunbr.c \
			ft_puthexa.c \
			ft_putaddress.c \
			print_d.c \
			print_c.c \
			print_s.c \
			print_u.c \
			print_x.c \
			print_p.c \
			print_perc.c \
			print_zero.c \
			print_space.c \
			ft_init_flags.c \
			ft_init_list.c \
			ft_nblenchar.c \
			ft_nblenint.c \
			ft_nblenuint.c \
			check_spec.c \
			check_space.c \
			check_star.c \
			check_dash.c \
			check_zero.c \
			check_dot.c \
			print_content.c

FLAGS		= -Wall -Wextra -Werror -c

INCLUDE 	= libft.h

OBJS 		= $(SRC:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(INCLUDE)
				ar rcs $(NAME) $(OBJS)

$(OBJS):		$(SRC)
				gcc $(FLAGS) $(SRC) -I $(INCLUDE)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			re clean fclean all
