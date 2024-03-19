/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:51:17 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/01 10:21:19 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print_record(char ch[], int a, int b, int c)
{
	ch[0] = ('0' + a);
	ch[1] = ('0' + b);
	ch[2] = ('0' + c);
	ch[3] = ',';
	ch[4] = ' ';
	write(1, &ch[0], 1);
	write(1, &ch[1], 1);
	write(1, &ch[2], 1);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, &ch[3], 1);
		write(1, &ch[4], 1);
	}
}

void	ft_print_comb(void)
{
	int		a_int;
	int		b_int;
	int		c_int;
	char	ch[5];

	a_int = 0;
	b_int = 1;
	c_int = 2;
	while (a_int < 10)
	{
		b_int = a_int + 1;
		while (b_int < 10)
		{
			c_int = b_int + 1;
			while (c_int < 10)
			{
				ft_print_record(ch, a_int, b_int, c_int);
				c_int++;
			}
			b_int++;
		}
		a_int++;
	}
}
