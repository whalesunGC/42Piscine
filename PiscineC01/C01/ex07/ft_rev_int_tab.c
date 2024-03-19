/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:34 by wichee            #+#    #+#             */
/*   Updated: 2024/03/18 16:50:13 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		i;
	int		num;
	char	digit;

	start = 0;
	end = size - 1;
	i = 0;
	while (start < end)
	{
		ft_swap_int(&tab[start], &tab[end]);
		start++;
		end--;
	}
	while (i < size)
	{
		num = tab[i];
		digit = num + '0';
		write(1, &digit, 1);
		i++;
	}
}
