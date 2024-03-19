/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:55:37 by wichee            #+#    #+#             */
/*   Updated: 2024/03/19 09:07:20 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arr(int argc, char **argv, int i, int j)
{
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	delta;
	unsigned char	*str1;
	unsigned char	*str2;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	delta = *str1 - *str2;
	return (delta);
}

void	ft_sort_arr(char **argv, int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_sort_arr(argv, argc);
	while (i < argc)
	{
		ft_print_arr(argc, argv, i, j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
