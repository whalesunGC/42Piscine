/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:01:23 by wichee            #+#    #+#             */
/*   Updated: 2024/03/13 13:18:36 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

int	is_combination_unique(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_recursive_combn(int *arr, int n, int index, int current_digit)
{
	int	i;

	if (index == n)
	{
		if (is_combination_unique(arr, n))
		{
			ft_print_number(arr, n);
			if (arr[0] < 10 - n)
				write(1, ", ", 2);
		}
		return ;
	}
	i = current_digit + 1;
	while (i <= 9)
	{
		arr[index] = i;
		ft_recursive_combn(arr, n, index + 1, i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
	{
		ft_recursive_combn(arr, n, 0, -1);
		write(1, "\n", 1);
	}
}
