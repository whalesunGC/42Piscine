/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:51:17 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/01 13:39:55 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print(char ch)
{
	write(1, &ch, 1);
}

void	ft_put_digits(int nb, int is_max)
{
	if (is_max == 1)
	{
		is_max = 0;
		ft_put_digits(nb / 10, is_max);
		ft_print('0' + ((nb % 10) + 1));
	}
	else
	{
		if (nb >= 10)
			ft_put_digits(nb / 10, is_max);
		ft_print('0' + (nb % 10));
	}
}

void	ft_putnbr(int nb)
{
	int	is_max;

	is_max = 0;
	if (nb < 0)
	{
		ft_print('-');
		nb *= -1;
		if (nb < 0)
		{
			is_max = 1;
			nb = 2147483647;
		}
	}
	ft_put_digits(nb, is_max);
}
