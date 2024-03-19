/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:58:57 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/07 21:58:59 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int	i;
	int	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
		{
			low = 0;
		}
		i++;
	}
	if (low == 1)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;
	int	tab[10];

	i = 0;
	max = 10;
	while (i < n)
	{
		tab[i++] = 0;
	}
	while (tab[0] <= (max - n) && n >= 1 && n < max)
	{
		print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
