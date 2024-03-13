/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:38:15 by wichee            #+#    #+#             */
/*   Updated: 2024/03/12 10:54:23 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int d0, int d1, int d2)
{
	char	buffer;
	int		i;
	int		digits[3];

	digits[0] = d0;
	digits[1] = d1;
	digits[2] = d2;
	i = 0;
	while (i <= 2)
	{
		buffer = digits[i] + '0';
		write(1, &buffer, 1);
		i++;
	}
	if (!(d0 == 7 && d1 == 8 && d2 == 9))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		digit0;
	int		digit1;
	int		digit2;

	digit0 = 0;
	while (digit0 <= 7)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 8)
		{
			digit2 = digit1 + 1;
			while (digit2 <= 9)
			{
				if (digit2 > digit1 && digit1 > digit0)
					ft_print_number(digit0, digit1, digit2);
				digit2++;
			}
			digit1++;
		}
		digit0++;
	}
}