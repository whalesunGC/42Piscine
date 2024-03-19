/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:40:34 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/17 17:38:09 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *ch)
{
	int	p;

	p = 0;
	while (ch[p])
		p++;
	write(1, ch, p);
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_compare(char *arr[], int left, int right)
{
	char	*ch;

	if (ft_strcmp(arr[left], arr[right]) > 0)
	{
		ch = arr[left];
		arr[left] = arr[right];
		arr[right] = ch;
	}
}

void	ft_sort_from_index(char *arr[], int size, int start_index)
{
	int	i;
	int	j;

	i = start_index;
	j = size - 1;
	while (j > start_index)
	{
		while (i < j)
		{
			ft_compare(arr, i, j);
			i++;
		}
		i = start_index;
		j--;
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	if (argc > 1)
	{
		ft_sort_from_index(argv, argc, 1);
		i = 1;
		while (i < argc)
		{
			ft_print(argv[i]);
			i++;
		}
	}
}
