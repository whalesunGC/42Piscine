/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:42:15 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/18 11:01:09 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	fill_arr(char *str, unsigned int nbr, int i, char *base_to)
{
	if (nbr == 0)
		return ;
	fill_arr(str, nbr / ft_strlen(base_to), i + 1, base_to);
	str[i] = base_to[nbr % ft_strlen(base_to)];
}

char	*reverse_arr(char *str, int sign)
{
	char	temp;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
	if (sign)
	{
		i = size;
		while (i > 0)
		{
			str[i] = str[i - 1];
			i--;
		}
		str[0] = '-';
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*convert_base(int nbr_base_10, char *base_to)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 1000);
	if (!result)
		return (NULL);
	if (nbr_base_10 == 0)
		result[0] = base_to[0];
	else if (nbr_base_10 < 0)
		fill_arr(result, -nbr_base_10, 0, base_to);
	else
		fill_arr(result, nbr_base_10, 0, base_to);
	result = reverse_arr(result, nbr_base_10 < 0);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_base_10;
	char	*result;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nbr_base_10 = ft_atoi_base(nbr, base_from);
	result = convert_base(nbr_base_10, base_to);
	return (result);
}
