/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:42:56 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 15:10:57 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
# include <stdio.h>

int	main()
{
	int	a;
	int b;
	//char ptr[5];

	//unsigned int n3 = 4294967295;
	//printf("asdf%.2isd12%%fgh%ckjh\n", -456, 'a');
	//ft_printf("asdf%.2isdf%%gh%ckjh\n", -456, 'a');
	//printf("%d\n", ft_printf("1 -%-05d\n", 56));
	/*printf("%d\n", printf("1 -%-05d\n", 56));
	printf("1 -%-05d\n", 56);
	fflush(stdout);*/
	/*a = ft_printf("1 -%.15d blabla %.2d\n", -789,  -456);
	b = printf("1 -%.15d blabla %.2d\n", -789,  -456);
	printf("%d\n", a);
	printf("%d\n", b);*/
	//printf("1 -%05d\n", 789);
//	printf("%u\n",n3);
/*	ft_printf("%x\n", 9958);
	ft_printf("%x\n", 0x42fe8);
	ft_printf("%X\n", 9958);
	ft_printf("%X\n", 0x42fe8);*/
	//ft_printf("%p\n", ptr);
	//printf("%p\n", ptr);
	//printf("78-%d\n", 56);
//	printf("55\n");
//	printf("asdf%.2isd12%%fgh%ckjh", -456, 'a');
//	while (1)
//		;
//	system("leaks a.out");
//	printf("33\n");	
    a = ft_printf("%d\n", -589);
    b = printf("%d\n", -589);	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
    a = ft_printf("%-3d\n", -2464);
    b = printf("%-3d\n", -2464);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
    a = ft_printf("%.5d\n", -2372);	
    b = printf("%.5d\n", -2372);	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t1 %050d\n", 10);
	b = printf("t1 %050d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t2 %-50d\n", 10);
	b = printf("t2 %-50d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t3 %50.0d\n", 10);
	b = printf("t3 %50.0d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t4 %50.50d\n", 10);
	b = printf("t4 %50.50d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t5 %50.10d\n", -10);
	b = printf("t5 %50.10d\n", -10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("t6 %*.*d\n", 50,  5, -10);
	b =	printf("t6 %*.*d\n", 50,  5, -10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("t7 %1.50d\n", -10);
	b =	printf("t7 %1.50d\n", -10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("t8 %1.50d\n", 10);
	b =	printf("t8 %1.50d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	a =	ft_printf("t9 %2.2d\n", 10);
	b =	printf("t9 %2.2d\n", 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	a =	ft_printf("t10 %2.2d\n", -10);
	b =	printf("t10 %2.2d\n", -10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("t12 %.0d\n", 0);
	b =	printf("t12 %.0d\n", 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("t13 %01d\n", -20);
	b =	printf("t13 %01d\n", -20);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("t14 %10d\n", 1000);
	b =	printf("t14 %10d\n", 1000);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	b =	printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("31 This is an int : %.0d\n", 0);
	b =	printf("31 This is an int : %.0d\n", 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("32 This is an int : %0d\n", -2);
	b =	printf("32 This is an int : %0d\n", -2);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st1 %*.*d\n", 10, 10, 50);
	b =	printf("st1 %*.*d\n", 10, 10, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st2 %*.*d\n", 1, 50, 50);
	b =	printf("st2 %*.*d\n", 1, 50, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st3 %*.*d\n", 0, 0, 50);
	b =	printf("st3 %*.*d\n", 0, 0, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st4 %*.*d\n", 0, 50, 50);
	b =	printf("st4 %*.*d\n", 0, 50, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st5 %*.*d\n", 10, 0, 50);
	b =	printf("st5 %*.*d\n", 10, 0, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st6 %*.*d\n", 10, 10, 50);
	b =	printf("st6 %*.*d\n", 10, 10, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st12 %*d\n", 10, 50);
	b =	printf("st12 %*d\n", 10, 50);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("st13 %*d\n", 0, 0);
	b =	printf("st13 %*d\n", 0, 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st14 %.*d\n", 0, 0);
	b =	printf("st14 %.*d\n", 0, 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st15 %*d\n", 50, 5);
	b =	printf("st15 %*d\n", 50, 5);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st16 %-.*d\n", 50, -5);
	b =	printf("st16 %-.*d\n", 50, -5);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st17 %0.*d\n", 0, 0);
	b =	printf("st17 %0.*d\n", 0, 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a = ft_printf("st118 %*d\n", 100, 0);
	b =	printf("st118 %*d\n", 100, 0);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st119 %*d\n", 1000, 10);
	b =	printf("st119 %*d\n", 1000, 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	/*a =	ft_printf("st120 %*d\n", 10000, 467);
	b =	printf("st120 %*d\n", 10000, 467);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("st121 %*d\n", 100000, -589);
	b =	printf("st121 %*d\n", 100000, -589);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);*/
	a =	ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	b =	printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg1 %*d\n", -9, 150);
	b =	printf("neg1 %*d\n", -9, 150);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg2 %*.*d\n", -9, 4, 1555);
	b =	printf("neg2 %*.*d\n", -9, 4, 1555);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg3 %*d\n", -9, -255);
	b =	printf("neg3 %*d\n", -9, -255);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg4 %*.*d\n", 0, 0, -30);
	b =	printf("neg4 %*.*d\n", 0, 0, -30);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg5 %*d\n", -100, -589);
	b =	printf("neg5 %*d\n", -100, -589);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	a =	ft_printf("neg6 %*d\n", -156, 15555);
	b =	printf("neg6 %*d\n", -156, 15555);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	fflush(stdout);
	/*ft_printf("neg7 %*.*d\n", -1586, 15, 0);
	printf("neg7 %*.*d\n", -1586, 15, 0);
	ft_printf("neg8 %*.*d\n", -1586, 15, 300);
	printf("neg8 %*.*d\n", -1586, 15, 300);
	ft_printf("neg9 %*.*d\n", 15856, 155, -3000);
	printf("neg9 %*.*d\n", 15856, 155, -3000);
	ft_printf("neg10 %*.*d\n", -15586, 15, 150);
	printf("neg10 %*.*d\n", -15586, 15, 150);
	ft_printf("neg11 %*.*d\n", -15586, 15, 0);
	printf("neg11 %*.*d\n", -15586, 15, 0);*/
	//system("leaks a.out");
	return (0);
}

/*int main(int ac, char **av)
{
	(void)ac;
	char *str;
	int	tab[14];
	str = av[1];
	tab[0] = ft_printf(str, 1);
	printf("|");
	tab[1] = printf(str, 1);
	printf("|");
	printf("%d!%d", tab[0], tab[1]);
	printf("\n");
	tab[2] = ft_printf(str, 10);
	printf("|");
	tab[3] = printf(str, 10);
	printf("|");
	printf("%d!%d", tab[2], tab[3]);
	printf("\n");
	tab[4] = ft_printf(str, 100);
	printf("|");
	tab[5] = printf(str, 100);
	printf("|");
	printf("%d!%d", tab[4], tab[5]);
	printf("\n");
	tab[6] = ft_printf(str, 0);
	printf("|");
	tab[7] = printf(str, 0);
	printf("|");
	printf("%d!%d", tab[6], tab[7]);
	printf("\n");
	tab[8] = ft_printf(str, -1);
	printf("|");
	tab[9] = printf(str, -1);
	printf("|");
	printf("%d!%d", tab[8], tab[9]);
	printf("\n");
	tab[10] = ft_printf(str, -10);
	printf("|");
	tab[11] = printf(str, -10);
	printf("|");
	printf("%d!%d", tab[10], tab[11]);
	printf("\n");
	tab[12] = ft_printf(str, -100);
	printf("|");
	tab[13] = printf(str, -100);
	printf("|");
	printf("%d!%d", tab[12], tab[13]);
	printf("\n");
	return (0);
}*/
