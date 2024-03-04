/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:01:00 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/04 17:03:40 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
//void	ft_sort_int_tab(int *tab, int size);

void	ft_print_pointer_arr(int* tab, int size)
{
	int	i;
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int		n;
	int		*n1;
	int		**n2;
	int		***n3;
	int		****n4;
	int		*****n5;
	int		******n6;
	int		*******n7;
	int		********n8;
	int		*********n9;
	int		a;
	int		b;
	int		testArr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//	int		testArr2[8] = {5, 6, 7, 8, 1, 2, 3, 4};
	char	*ch;

	/** ex00 **/
	n = 10;
	ft_ft(&n);
	printf("ex00: %i\n", n);
	/** ex01 **/
	n = 10;
	n1 = &n;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
	ft_ultimate_ft(n9);
	printf("ex01: %i\n", n);
	/** ex02 **/
	a = 10;
	b = 20;
	ft_swap(&a, &b);
	printf("ex02: A is %i and B is %i\n", a, b);
	/** ex03 **/
	ft_div_mod(15, 4, &a, &b);
	printf("ex03: Div is %i and Mod is %i\n", a, b);
	/** ex04 **/
	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("ex04: Div is %i and Mod is %i\n", a, b);
	/** ex05 **/
	ch = "Hello World";
	ft_putstr(ch);
	ft_putstr("\n");
	/** ex06 **/
	a = ft_strlen(ch);
	printf("ex06: Length is: %i\n", a);
	/** ex07 **/
	ft_rev_int_tab(testArr, 8);
	ft_print_pointer_arr(testArr, 8);
	/** ex08 **/
//	ft_sort_int_tab(testArr2, 8);
//	ft_print_pointer_arr(testArr2, 8);
}
