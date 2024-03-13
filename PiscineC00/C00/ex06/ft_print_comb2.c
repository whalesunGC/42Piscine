/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:55:35 by wichee            #+#    #+#             */
/*   Updated: 2024/03/12 16:02:27 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int d0, int d1)
{
	char	buffer;

	buffer = d0 + '0';
	write(1, &buffer, 1);
	buffer = d1 + '0';
	write(1, &buffer, 1);
}

void	ft_print_uno_comb(int d0, int d1, int d2, int d3)
{
	if ((d2 * 10 + d3) > (d0 * 10 + d1))
	{
		ft_print_num(d0, d1);
		write(1, " ", 1);
		ft_print_num(d2, d3);
		if (!(d0 == 9 && d1 == 8 && d2 == 9 && d3 == 9))
			write(1, ", ", 2);
	}
}

void	ft_loop_4digits(int d0, int d1, int d2, int d3)
{
	d0 = 0;
	while (d0 <= 9)
	{
		d1 = 0;
		while (d1 <= 9)
		{
			d2 = 0;
			while (d2 <= 9)
			{
				d3 = 1;
				while (d3 <= 9)
				{
					ft_print_uno_comb(d0, d1, d2, d3);
					d3++;
				}
				d2++;
			}
			d1++;
		}
		d0++;
	}
}

void	ft_print_comb2(void)
{
	int	d0;
	int	d1;
	int	d2;
	int	d3;

	d0 = 0;
	d1 = 0;
	d2 = 0;
	d3 = 1;
	ft_loop_4digits(d0, d1, d2, d3);
}