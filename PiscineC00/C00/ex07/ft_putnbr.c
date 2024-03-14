/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:38:33 by wichee            #+#    #+#             */
/*   Updated: 2024/03/14 20:18:38 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_num_len(int nb)
{
	int	count;

	count = 1;
	while ((nb / 10) != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_printnum(int i, int len, int nb)
{
	char	digit[10];

	while (i < len)
	{
		digit[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (len > 0)
	{
		write(1, &digit[len -1], 1);
		len--;
	}
}

void	ft_putnbr(int nb)
{
	int		len;
	int		i;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	len = ft_num_len(nb);
	i = 0;
	ft_printnum(i, len, nb);
}
