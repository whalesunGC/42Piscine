/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:18:45 by wichee            #+#    #+#             */
/*   Updated: 2024/03/18 18:22:12 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_num(int a, int b)
{
	ft_print('0' + a / 10);
	ft_print('0' + a % 10);
	ft_print(' ');
	ft_print('0' + b / 10);
	ft_print('0' + b % 10);
	if (!(a == 98 && b == 99))
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb2(void)
{
	int		first_int;
	int		second_int;

	first_int = 0;
	second_int = 0;
	while (first_int <= 98 && second_int <= 99)
	{
		if (second_int <= 98)
		{
			second_int++;
		}
		else
		{
			first_int++;
			second_int = first_int + 1;
		}
		if (second_int < 100)
		{
			ft_print_num(first_int, second_int);
		}
	}
}

int main(void)
{
	ft_print_comb2();
}
