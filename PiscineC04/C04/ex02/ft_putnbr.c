/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:06:47 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 17:18:54 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_intlen(int *nb)
{
	int	len;
	int	*temp;

	len = 0;
	temp = *nb;
	if (nb == NULL)
		return (-1);
	if (temp == 0)
		return (1);
	while (temp != 0)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int nb)
{
	int	*ptr;

	ptr = &nb;
	write(1, &nb, ft_intlen(ptr) * 4);
}
