/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:23:45 by lshein            #+#    #+#             */
/*   Updated: 2024/03/02 16:14:13 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putln(char f, char s, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == (x - 1))
		{
			ft_putchar(f);
		}
		else
		{
			ft_putchar(s);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		ft_putln('o', '-', x);
		while (j < y - 2)
		{
			ft_putln('|', ' ', x);
			j++;
		}
		if (y >= 2)
		{
			ft_putln('o', '-', x);
		}
	}
}
