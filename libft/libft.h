/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:31:17 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 15:43:00 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef	struct		s_list
{
	char			*content;
	int				flag_star;
	int				val_star;
	int				flag_zero;
	int				val_zero;
	int				flag_dash;
	int				val_dash;
	int				flag_dot;
	int				val_dot;
	char			spec;
	int				i;
}					t_list;

typedef	struct		s_list2
{
	int				i;
	int				len;
}					t_list2;

int					ft_strlen(const char *str);
int					getlenhexa(unsigned int nb);
int					getlenptr(uintptr_t ptr);
char				*ft_charjoin(char *s1, char s2);
int					ft_strchr(const char *str, int c);
char				ft_getstrchr(const char *str, int c);
int					ft_strstr(char *str, char *list_chr);
char				*ft_substr(char *s, unsigned int start, unsigned int len);
int					ft_isdigit(char c);
int					ft_isspace(int c);
int					ft_isneg(int nb);
int					ft_atoi_simple(char *str);
void				ft_putnbr(int n);
void				ft_putnstr(char *s, int n);
void				ft_putunbr(unsigned int n);
void				ft_puthexa(unsigned int nb, char flag);
void				ft_putaddress(uintptr_t ptr);
int					print_d(int nb, t_list flags);
int					print_c(char c, t_list flags);
int					print_s(char *s, t_list flags);
int					print_u(unsigned int nb, t_list flags);
int					print_x(unsigned int nb, t_list flags);
int					print_p(void *address, t_list flags);
int					print_perc(t_list flags);
void				print_zero(int nb);
void				print_space(int nb);
t_list				ft_init_flags(int i);
t_list2				ft_init_list(int i);
int					ft_nblenchar(char *str);
int					ft_nblenint(int nb);
int					ft_nblenuint(unsigned int nb);
t_list				check_spec(t_list elem, char *str);
t_list				check_space(t_list elem, char *str);
t_list				check_star(t_list elem, va_list ap);
t_list				check_dash(t_list elem, char *str, va_list ap);
t_list				check_zero(t_list elem, char *str, va_list ap);
t_list				check_dot(t_list elem, char *str, va_list ap);
int					print_content(char *str);

#endif
