/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:38:33 by wichee            #+#    #+#             */
/*   Updated: 2024/03/12 19:12:56 by wichee           ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	int		len;
	int		i;
	char	digit[10];

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	len = ft_num_len(nb);
	i = 0;
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
